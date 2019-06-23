# https://www.codewars.com/kata/5552101f47fc5178b1000050

# Example

# dig_pow(89, 1) should return 1 since 8¹ + 9² = 89 = 89 * 1
# dig_pow(92, 1) should return -1 since there is no k such as 9¹ + 2² equals 92 * k


def dig_pow(n, p):
    sum=0
    for i in list(str(n)):
	sum+=int(i)**p
        p+=1
    if sum % n == 0:
	return int(sum / n)
    return -1
