def binsearch(lo , hi , value , sort_arr):
	sort_arr.sort()
	while lo < hi :
		median = (lo + hi)/2
		if sort_arr[median] < value :
			lo = median
		elif sort_arr[median] > value:
			hi = median  
		elif sort_arr[median] == value:
			return median
	
	return False
	

t = int(raw_input())

for _ in xrange(0,t):
	m = int(raw_input())
	n = int(raw_input())
	arr = map(int , raw_input().strip().split())

	# sort_arr.sort()
	print arr
	# print sort_arr
	for x in xrange(0,n):
		diff = m - arr[x]
		y = binsearch(x+1 , n-1 , diff , arr)
		if y:
			print x ,
			print arr[x]
			print arr[arr.index(diff)]
			print arr.index(diff)
			# print sort_arr[y] 
		# else:
		# 	print "no"
