# https://www.codewars.com/kata/55e7280b40e1c4a06d0000aa

# Examples:

# ts = [50, 55, 56, 57, 58] choose_best_sum(163, 3, ts) -> 163

# xs = [50] choose_best_sum(163, 3, xs) -> nil (or null or ... or -1 (C++, C, Rust, Swift, Go)

# ys = [91, 74, 73, 85, 73, 81, 87] choose_best_sum(230, 3, ys) -> 228

import itertools

def choose_best_sum(t, k, ls):
        best_sum = 0
    best_set = None
    combinations = itertools.combinations(ls, k)
    for combination in combinations:
	combi_sum = sum(combination)
        if combi_sum <= t and combi_sum > best_sum:
	    best_set = combination
            best_sum = combi_sum
    return None if best_sum is 0 else best_sum
