# Check to see if a string has the same amount of 'x's and 'o's.
# The method must return a boolean and be case insensitive. The string can contain any char.

#Examples input/output:

#XO("ooxx") => true
#XO("xooxx") => false

def xo(x):
    return ( True if x.lower().count('x') == x.lower().count('o') else False )
