# https://www.codewars.com/kata/5613d06cee1e7da6d5000055

# Examples:

# step(2, 5, 7) --> [5, 7] or (5, 7) or {5, 7} or "5 7"

# step(2, 5, 5) --> nil or ... or []

import bisect
from math import sqrt
from random import randint


def primes(n):
    if n < 2:
	return []
    if n == 2:
	return [2, ]

    sieve = list(range(3, n + 1, 2))
    top = len(sieve)
    for m in range(3, int(sqrt(n + 1)) + 1, 2):
	if sieve[(m - 3) // 2] != 0:
	    bot = (m * m - 3) // 2
            sieve[bot::m] = [0, ] * ((top - bot - 1) // m + 1)

    return [2, ] + list(filter(None, sieve))

def step(g, m, n):
    _primes_ = primes(n)
    lo = 0
    hi = _len_primes_ = len(_primes_)

    while lo < hi:
	mid = (lo + hi) // 2
        midvar = _primes_[mid]
        if midvar < m:
	    lo = mid + 1
        else:
	    hi = mid

    for i in range(hi, _len_primes_ - 1):
	for j in range(i + 1, _len_primes_):
	    step = _primes_[j] - _primes_[i]
            if step == g:
		return [_primes_[i], _primes_[j]]
            if step > g:
		break
