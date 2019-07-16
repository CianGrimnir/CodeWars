# https://www.codewars.com/kata/row-weights/train/python

# rowWeights([13, 27, 49])  ==>  return (62, 27)
# rowWeights([50, 60, 70, 80])  ==>  return (120, 140)

# Solution 1:

def row_weights(a):
    sumTeam1=sum([a[i] for i in range(0,len(a),2)])
    sumTeam2=sum([a[i] for i in range(1,len(a),2)])
    return (sumTeam1,sumTeam2)

# Solution 2:

def row_weights(array):
    return sum(array[::2]), sum(array[1::2])
