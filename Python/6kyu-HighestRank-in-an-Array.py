# Write a method which returns the number which is most frequent in the given input array.
# If there is a tie for most frequent number, return the largest number of which is most frequent.

# Example:

# arr = [12, 10, 8, 12, 7, 6, 4, 10, 12];
# highestRank(arr) //=> returns 12

# arr = [12, 10, 8, 12, 7, 6, 4, 10, 12, 10];
# highestRank(arr) //=> returns 12


def highest_rank(arr):
    max=[0,0]
    for i in sorted(set(arr)):
	if max[1] <= arr.count(i):
 	    max[0] = i
            max[1] = arr.count(i)
    return max[0]
