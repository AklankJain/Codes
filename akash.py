dist = range(1000000)
dist[0] = 1
dist[1] = 2
dist[2] = 4
for i in xrange(3 , 1000000):
	dist[i] = (dist[i-1] + dist[i-2] + dist[i-3])%1000000007	
	
t = int(raw_input())
for _ in xrange(0,t):
	n = int(raw_input())
	print dist[n-1]