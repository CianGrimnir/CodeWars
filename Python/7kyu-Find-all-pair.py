# You are given array of integers, your task will be to count all pairs in that array and return their count.
#
# Examples
#
# [1, 2, 5, 6, 5, 2]  -->  2

# because there are 2 pairs: 2 and 5

# [1, 2, 2, 20, 6, 20, 2, 6, 2]  -->  4

# because there are 4 pairs: 2, 20, 6 and 2

# Solution 1:

def isPowerOfTwo(n):
    return n//2


def duplicates(arr):
    pairDict={}
    pairCount=0
    for i in arr:
	if pairDict.get(i,0):
	    pairDict[i]=pairDict.get(i)+1
        else:
	    pairDict[i]=1
    for key,value in pairDict.items():
	counter=isPowerOfTwo(value)
        pairCount+=counter
    return pairCount

# Solution 2:

def duplicates(arr):
    return sum(arr.count(i)//2 for i in set(arr))
