# https://www.codewars.com/kata/56dbe7f113c2f63570000b86

# s = "abcd\nefgh\nijkl\nmnop"
# oper(rot, s) => "ponm\nlkji\nhgfe\ndcba"
# oper(selfie_and_rot, s) => "abcd....\nefgh....\nijkl....\nmnop....\n....ponm\n....lkji\n....hgfe\n....dcba"


def rot(strng):
    rot=[]
    stringList=strng.split("\n")
    for i in stringList:
	rot.append(i[::-1])
    rot.reverse()
    return '\n'.join(rot)

def selfie_and_rot(strng):
    finalReplaceString = '\n' + len(strng.split('\n')[0]) * '.'
    initReplaceString = len(strng.split('\n')[0]) * '.' + '\n'
    gapReplaceString = len(strng.split('\n')[0]) * '.' + '\n' + len(strng.split('\n')[0]) * '.'
    initStrng=strng.replace('\n',initReplaceString)
    initStrng+=gapReplaceString + rot(strng).replace('\n',finalReplaceString)
    return initStrng

def oper(fct, s):
    return fct(s)
