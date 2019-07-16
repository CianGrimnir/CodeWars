# Strong number is the number that the sum of the factorial of its digits is equal to number itself.

#For example : 
#145 , 1! + 4! + 5! = 1 + 24 + 120 = 145
# So, 145 is a Strong number. 



from math import factorial as fact

# Solution 1:

def strong_num(number):
    sum=0
    for i in list(str(number)):
	sum+=fact(int(i))
    return "STRONG!!!!" if sum == int(number) else "Not Strong !!"


# Solution 2:

def strong_num(number):
    return "STRONG!!!!" if sum(fact(int(i)) for i in str(number)) == number else "Not Strong !!"
