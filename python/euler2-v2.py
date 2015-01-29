#!/usr/bin/python
#
#
#

def fib():
	num1 = 0
	num2 = 1
	newnum = 2
	evenlist = []
	termlist = []
	sum = 0

	while newnum < 4000000:
		num1 = num2
		if num1 in termlist:
			pass
		else:
			termlist.append(num1)
		num2 = newnum
		if num2 in termlist:
			pass
		else:
			termlist.append(num2)
		newnum = num1 + num2
		if newnum in termlist:
			pass
		else:
			termlist.append(newnum)
	for item in termlist:
		if item % 2 == 0:
			print 'found even, %d, adding to list' % item
			evenlist.append(item) 
	for i in evenlist:
		sum += i
	print 'Total of even terms = %d' % sum

fib()
