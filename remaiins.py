sum = 0 
t = int(raw_input().strip())
for _ in xrange(0,t):
	a , b , n = map(int , raw_input().strip().split())
	sum +=a + b
	x = 3
	sum = 0 
	while x <= n:
		c = abs(a - b)
		sum+= c
		a = b
		b = c 
	print (sum)
