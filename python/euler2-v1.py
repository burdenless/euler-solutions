#! usr/bin/python

def fib():
    a, b = 1, 2
    print 'Fibonacci sequence initializers = %d, %d' % (a, b)
    sum = 0
    fibset = []
    for num in range(32):
        a, b = b, a+b
        fibset.append(a)
    evenfib = []
    for num in fibset:
        if num % 2 == 0:
      	    evenfib.append(num)
        else:
            fibset.remove(num)
    evenlist = str(evenfib).strip('[]')
    print 'Even terms found: %s' % evenlist
    for item in evenfib:
	sum += item
    print 'Sum of even terms: %d' % sum 
    
  
fib()
