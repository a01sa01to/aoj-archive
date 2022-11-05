import os
import time
from datetime import datetime

import fetch
import get
from commit import commit


def main():
    sec = get.last_submission_epoch()
    print("Last Submission Time:", datetime.fromtimestamp(sec))

    submissions = fetch.submissions(sec)

    print("Found {} submission(s)".format(len(submissions)))

    if len(submissions) == 0:
        print("No new submissions")
        return

    cnt = 1
    for s in submissions:
        print(f"\r\033[1m ({cnt: 3}/{len(submissions): 3})\033[0m Submission #{s.judgeId} ({fetch.contestName(s)}, at {datetime.fromtimestamp(s.submissionDate)})", end="", flush=True)
        time.sleep(2)
        save_dir = os.path.join(os.path.dirname(__file__), "..", fetch.contestName(s))
        save_path = f"{save_dir}{os.sep}{s.problemId}_{s.judgeId}_{fetch.judgeResult(s)}.{get.extension(s.language)}"

        os.makedirs(save_dir, exist_ok=True)
        with open(save_path, mode="w", encoding="UTF-8") as file:
            file.write("/*\n")
            file.write(f" * Author: {s.userId}\n")
            file.write(f" * Submission URL: {get.submission_url(s)}\n")
            file.write(f" * Submitted at: {datetime.fromtimestamp(s.submissionDate)}\n")
            file.write(f" * Problem URL: {get.problem_url(s)}\n")
            file.write(f" * Result: {fetch.judgeResult(s)}\n")
            file.write(f" * Execution Time: {s.cpuTime} s\n")
            file.write(" */\n\n")
            file.write(fetch.code(s))
        commit(s, save_path)
        cnt += 1

    print("All Done!")


if __name__ == "__main__":
    main()
