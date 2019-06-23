# Find the length of the longest substring in the given string s that is the same in reverse. 

# Example:

# "a" -> 1 
# "aab" -> 2  
# "abcde" -> 1


def longest_palindrome (s):
    length =0
    for x in range( 1,len(s)+1):
        for pos in range(0, len(s) - x+ 1):
            word = s[pos:pos + x]
            if word == word[::-1]:
                length = x
    return length
