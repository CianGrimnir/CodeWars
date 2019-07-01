# Let us consider this example (array written in general format):

# ls = [0, 1, 3, 6, 10]

# Its following parts:
# ls = [0, 1, 3, 6, 10]
# ls = [1, 3, 6, 10]
# ls = [3, 6, 10]
# ls = [6, 10]
# ls = [10]
# ls = []
# 
# The corresponding sums are (put together in a list): [20, 20, 19, 16, 10, 0]


from functools import reduce

def parts_sums(ls):
        if len(ls) == 0:
	    return [0]
    totalSum=reduce(lambda a, b: a + b, ls)
    sumList=[totalSum]
    for i in range(1,len(ls)+1):
	totalSum-=ls[i-1]
        sumList.append(totalSum)
    return sumList
