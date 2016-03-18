import sys

t = int(raw_input())

for i in range(0,t):
	x = 1
	n = int(raw_input())
	if n == 1:
		days = 1
		n = 0
	elif n == 2:
		days = 2
		n = 0
	else:
		n = n - 2 
		days = 2 
		#print n
	while n > 0:
		#print days

		if n <= x+1 and n >= x-1:
			days+=1
			#print "first"
			n = 0
		elif n < x + x + 2:
			#print "second"
			days+=2 
			n = 0
		else:
			#print "hello , m here"
			n = n - (x + x + 2)
			days+=2
			x += 1
			#print n
	print days
		


