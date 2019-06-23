# Given an array, find the int that appears an odd number of times.

# There will always be only one integer that appears an odd number of times.


def find_it(seq):
    seqSet=set(seq)
    for i in seqSet:
	if seq.count(i) % 2 & 1:
		return i
