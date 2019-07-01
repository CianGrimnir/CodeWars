# https://www.codewars.com/kata/how-good-are-you-really/train/python

# You got an array with your colleges' points. Now calculate the average to your points!
# Return True if you're better, else False! 

# Solution 1:

from statistics import mean

def better_than_average(class_points, your_points):
    return True if  mean(class_points) < your_points else False


# Solution 2:

from functools import reduce

def better_than_average(class_points, your_points):
    return True if  reduce(lambda a, b: a + b, class_points) / len(class_points)  < your_points else False
