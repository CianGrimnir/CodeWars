# https://www.codewars.com/kata/53efc28911c36ff01e00012c/solutions/python/me/best_practice


# Solution 1:

import sys

global_counter = 0

def count_calls(func, *args, **kwargs):
        """Count calls in function func"""

    calls = [ -1 ]
    def tracer(frame, event, arg):
	global global_counter
        if event == 'call':
	    global_counter += 1
            calls[0] += 1
        return tracer
    sys.settrace(tracer)

    rv = func(*args, **kwargs)

    return calls[0], rv


# Solution 2:

class F(object):
        calls = 0

    def __init__(self, func):
	self.func = func

    def __call__(self, *args, **kwargs):
	result = self.func(*args, **kwargs)
        F.calls += 1
        return result


def count_calls(func, *args, **kwargs):
    func = F(func)
    return F.calls, func(*args, **kwargs)
