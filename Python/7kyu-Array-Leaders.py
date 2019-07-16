# https://www.codewars.com/kata/array-leaders-array-series-number-3/train/python

# An element is leader if it is greater than The Sum all the elements to its right side.
#arrayLeaders ({1, 2, 3, 4, 0}) ==> return {4}
#arrayLeaders ({16, 17, 4, 3, 5, 2}) ==> return {17, 5, 2}


def array_leaders(numbers):
    leaderList=[]
    for i in range(len(numbers)):
        if numbers[i] > sum(numbers[i+1::]):
            leaderList.append(numbers[i])
    return leaderList
