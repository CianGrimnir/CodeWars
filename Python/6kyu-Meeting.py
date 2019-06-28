# https://www.codewars.com/kata/meeting/train/python
#
# s = "Fred:Corwill;Wilfred:Corwill;Barney:Tornbull;Betty:Tornbull;Bjon:Tornbull;Raphael:Corwill;Alfred:Corwill";
# 
# So the result of function meeting(s) will be:
# output :
# "(CORWILL, ALFRED)(CORWILL, FRED)(CORWILL, RAPHAEL)(CORWILL, WILFRED)(TORNBULL, BARNEY)(TORNBULL, BETTY)(TORNBULL, BJON)"

# Solution 1:

import functools

def cmp(a, b):
    return (a > b) - (a < b)
def meeting(s):
    sortedString=''
    sample=[ ' '.join(i.split(":")) for i in s.split(";") ]
    sample.sort(key=functools.cmp_to_key(lambda x,y: cmp(x,y)))
    sortedName=sorted(sample,key=lambda x:x.split()[-1])
    for i in sortedName:
	first,last=i.split(' ')
        sortedString+="({}, {})"  .format(last.upper(),first.upper())
    return sortedString

# Solution 2:

from functools import reduce

def meeting(s):
    name = [ i.split(":")[::-1] for i in s.upper().split(";") ]
    name.sort(key=lambda x: x[0]+" "+x[1])
    return reduce(lambda acc, x: acc+"("+x[0]+", "+x[1]+")", name, "")
