# Given an array of ones and zeroes, convert the equivalent binary value to an integer.

# Eg: [0, 0, 0, 1] is treated as 0001 which is the binary representation of 1.

# Examples:

# Testing: [0, 0, 0, 1] ==> 1
# Testing: [1, 0, 1, 1] ==> 11

def binary_array_to_number(arr):
    return int(''.join([str(i) for i in arr]),2)
