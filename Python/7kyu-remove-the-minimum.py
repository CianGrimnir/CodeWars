# https://www.codewars.com/kata/remove-the-minimum/train/python

# remove_smallest([1,2,3,4,5]) = [2,3,4,5]
# remove_smallest([5,3,2,1,4]) = [5,3,2,4]

def remove_smallest(numbers):
        if len(numbers) < 1 :
	    return numbers
    else:
	numbers.remove(min(numbers))
    return numbers
