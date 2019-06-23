# Write a function called repeatStr which repeats the given string string exactly n times.

# repeatStr(6, "I") // "IIIIII"

def repeat_str(repeat, string):
    return ''.join(string for i in range(0,int(repeat)))
