# https://www.codewars.com/kata/554ca54ffa7d91b236000023

# Example:

#  delete_nth ([1,1,1,1],2) # return [1,1]

#  delete_nth ([20,37,20,21],1) # return [20,37,21]


def delete_nth(order,max_e):
    occur=[]
    for i in order:
	if occur.count(i) < max_e:
	    occur.append(i)
    return occur
