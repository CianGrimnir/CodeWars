# Given a series of numbers as a string, determine if the number represented by the string is divisible by three.

# Example:

# divisibleByThree('8409') // true
# divisibleByThree('100853') // false
# divisibleByThree('33333333') // true
# divisibleByThree('7') // false


def check(str):
    return True if not sum(list(map(int,list(str)))) % 3 else False
