import git
from datetime import datetime

from datatypes import Submission
import fetch


def commit(s: Submission, path: str) -> None:
    repo = git.Repo(".")
    repo.git.add(path)
    commit_msg = f"[{fetch.judgeResult(s)}] SubmissionID: {s.judgeId} at {datetime.fromtimestamp(s.submissionDate)} ({s.submissionDate})"
    try:
        repo.git.commit("-m", commit_msg, "-S", "--date", s.submissionDate)
    except git.GitCommandError as err:
        print("\033[2K\033[G", end="")
        print(f"\r\033[91mFail\033[0m Failed to commit: {commit_msg}", flush=True)
        print(err)
        exit(1)
    try:
        repo.git.rebase("HEAD~1", "--committer-date-is-author-date")
    except git.GitCommandError as err:
        print("\033[2K\033[G", end="")
        print(f"\r\033[91mFail\033[0m Failed to rebase: {commit_msg}", flush=True)
        print(err)
        exit(1)
    print("\033[2K\033[G", end="")
    print(f"\r\033[92mDone\033[0m {commit_msg}", flush=True)
