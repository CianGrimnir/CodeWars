# https://www.codewars.com/kata/550498447451fbbd7600041c


def comp(array1, array2):
    print(array1,array2)
    if array1 is None or array2 is None:
        return False
    array3=sorted([i for i in array2])
    array4=sorted([i**2 for i in array1])
    for i in range(0,len(array3)):
        if array3[i] != array4[i]:
            return False
    return True
