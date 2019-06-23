# Write a function, persistence, that takes in a positive parameter num and
# returns its multiplicative persistence, which is the number of times you 
# must multiply the digits in num until you reach a single digit.

# For example:

# persistence(39) => 3  # Because 3*9 = 27, 2*7 = 14, 1*4=4
                        # and 4 has only one digit.

#  persistence(999) => 4 # Because 9*9*9 = 729, 7*2*9 = 126,
                         # 1*2*6 = 12, and finally 1*2 = 2.


def persistence(n,persist=0):
    if len(str(n)) == 1:
	return persist
    mul=1
    for i in str(n):
	mul=mul*int(i)
    persist+=1
    total=persistence(mul,persist)
    return total
