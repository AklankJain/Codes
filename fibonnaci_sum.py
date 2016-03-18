def fibonnaci(n):
	a = 1
	b = 1 
	for x in xrange(2,n):
		c = a + b
		a  = b 
		b = c 
	return b 
sum = 0
t = int(raw_input())
fibo = []
for i in xrange(0,t):
	n, m = map(int , raw_input().strip().split(' '))
	fibo.insert(0,fibonnaci(n)) 
	fibo.insert(1,fibonnaci(n+1))
	sum = fibo[0] + fibo[1] 
	j = n 
	while j <= m-2:
		fibo[2] = fibo[0] + fibo[1]
		sum = sum + fibo[2]
		fibo[0] = fibo[1];
		fibo[1] = fibo[2];
	print sum