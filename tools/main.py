from utils import XMUOJAPI, XMUOJProblemInfo
from concurrent.futures import ThreadPoolExecutor

from pathlib import Path

OJ_dir = Path(__file__).parent.parent / "XMUOJ"

problems = XMUOJAPI.get_problem_list()

def process_problem(problem):
    info = XMUOJProblemInfo(XMUOJAPI.get_problem_info(problem))
    problem_dir = OJ_dir / problem
    if problem_dir.exists():
        info.save_problem_markdown(problem_dir)
        info.save_problem_testcases(problem_dir)

with ThreadPoolExecutor() as executor:
    executor.map(process_problem, problems)