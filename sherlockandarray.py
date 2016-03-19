t = int(raw_input().strip())
total = []
for _ in range(0,t):
	flag = 0 
	count = 0
	count2 = 0 
	n = int(raw_input().strip())
	arr = map(int , raw_input().strip().split())
	for x in range(0,n):
		count = 0 
		count2 = 0 
		for y in range(0,x):
			count+= arr[y]
		for z in range(x+1 , n):
			count2 += arr[z]
		# print count , count2
		if (count == count2):
			print "YES"
			flag = 1
			break
	if flag == 0:
		print "NO"






