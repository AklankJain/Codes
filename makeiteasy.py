t = int(raw_input())
for _ in xrange(0,t):
	a = int(raw_input())
	b = int(raw_input())
	x = float((a/11.0 + b/9.0))/2.0
	y = float((a/11.0 - b/9.0))/2.0
	print round(x*y,2)
