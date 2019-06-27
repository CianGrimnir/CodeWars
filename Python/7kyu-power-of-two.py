# Complete the function power_of_two that determines if a given non-negative integer is a power of two.

# Examples

# power_of_two(1024) ==> True
# power_of_two(4096) ==> True


def power_of_two(x):
      if x == 0:
	return False
  while (x!=1):
     if ( x % 2 != 0):
	return False
      x=x//2
  return True


def power_of_two(x):
        return x != 0 and ((x & (x - 1)) == 0)
