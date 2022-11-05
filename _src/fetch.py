import requests
from datatypes import Submission
from functools import lru_cache


@lru_cache(maxsize=128)
def submissions(epoch_sec: int) -> list[Submission]:
    url = "https://judgeapi.u-aizu.ac.jp/solutions/users/a01sa01to"
    res = requests.get(url).json()
    subm = [Submission(**s) for s in res]
    subm = [s for s in subm if s.submissionDate > epoch_sec]
    subm.reverse()
    return subm


@lru_cache(maxsize=128)
def contestName(s: Submission) -> str:
    url = f"https://judgeapi.u-aizu.ac.jp/resources/descriptions/ja/{s.problemId}"
    res = requests.get(url).json()
    return s.problemId.split("_")[0] if res["source"] is None else res["source"]


@lru_cache(maxsize=128)
def judgeResult(s: Submission) -> str:
    url = f"https://judgeapi.u-aizu.ac.jp/verdicts/{s.judgeId}"
    res = requests.get(url).json()
    for i in res["caseVerdicts"]:
        if(i["status"] != "AC"):
            return i["status"]
    return "AC"


@lru_cache(maxsize=128)
def code(s: Submission) -> str:
    url = f"https://judgeapi.u-aizu.ac.jp/reviews/{s.judgeId}"
    res = requests.get(url).json()
    return res["sourceCode"].replace("\r", "")
