class Submission:
    judgeId: int
    userId: str
    problemId: str
    language: str
    version: str
    submissionDate: int
    judgeDate: int
    cpuTime: float
    memory: int
    codeSize: int
    server: int
    policy: str
    rating: float
    review: int

    def __init__(self, **kwargs):
        self.judgeId = kwargs["judgeId"]
        self.userId = kwargs["userId"]
        self.problemId = kwargs["problemId"]
        self.language = kwargs["language"]
        self.version = kwargs["version"]
        self.submissionDate = kwargs["submissionDate"] // 1000
        self.judgeDate = kwargs["judgeDate"] // 1000
        self.cpuTime = kwargs["cpuTime"] / 100
        self.memory = kwargs["memory"]
        self.codeSize = kwargs["codeSize"]
        self.server = kwargs["server"]
        self.policy = kwargs["policy"]
        self.rating = kwargs["rating"]
        self.review = kwargs["review"]
