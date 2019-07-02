# A stream of data is received and needs to be reversed.

# Each segment is 8 bits long, meaning the order of these segments needs to be reversed, for example:
#    11111111  00000000  00001111  10101010

# should become:
#    10101010  00001111  00000000  11111111

# The data is given in an array as such:
#    [1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,1,0,1,0,1,0]


def data_reverse(data):
    rev=[]
    fin=[]
    for i in range(0,len(data),8):
	rev.append(data[i:i + 8])
    for i in reversed(rev):
	fin.extend(i)
    return fin
