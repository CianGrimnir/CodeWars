# https://www.codewars.com/kata/54129112fb7c188740000162

# Example:

# prefill(3,1) --> [1,1,1]
# prefill(2,"abc") --> ['abc','abc']
# prefill("1", 1) --> [1]


def prefill(n,v=None):
    if v is None:
	return ['undefined']*int(n)
    if n == 0:
	return []
    try:
	temp = int(n)
    except (TypeError,ValueError):
	return(n, "is invalid")
    return [v]*int(n)
