#!/usr/bin/env python
#
# Project Euler # 1
#

def multiples(num, below):
    counter = 1
    z = 0
    while True:
        x = num * counter
        if x < below:
            z += x
        else:
            break
	#print str(x) + ' = ' + str(num) + ' x ' + str(counter)
        counter += 1
    return z

below = 1000

print "Multiples of 3: " + str(multiples(3, below))
print "Multiples of 5: " + str(multiples(5, below))
print "Added: " + str(multiples(3, below) + multiples(5, below))
print "Subtracting multiples of 15 to avoid doubles..."
print "Answer: " + str(multiples(3, below) + multiples(5, below) - multiples(15, below))
