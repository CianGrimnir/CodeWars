# https://www.codewars.com/kata/59b401e24f98a813f9000026

import re

def compute_depth(n):
    depth = set()
    depth_count = 0
    multiply=1
    while True:
	if len(depth) == 10:
	    return depth_count
        depth_count+=1
        comp = re.findall('\d',str(n*multiply))
        for j in comp:
	    depth.add(int(j))
        multiply+=1
