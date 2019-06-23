# You are asked to square every digit of a number.

# For example, if we run 9119 through the function, 811181 will come out, because 92 is 81 and 12 is 1.

def square_digits(num):
    return int(''.join(str(int(b)**2) for b in str(num)))
