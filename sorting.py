n = int(raw_input())
pairs = [0]*200000
arr = map(int , raw_input().strip().split())
mini  = 9999999 
arr.sort()
# print arr
i = 0
count = 0
for x in xrange(0,n-2):
	# for z in xrange(x,n):
		# print "here"
	# if x == z:
		# continue
	diff = abs(arr[x] - arr[x+1])
		# print abs(arr[x] - arr[z])
	if diff < mini:
			# print "yo"
			# print diff
		mini = diff
		i = 0
		pairs[i] = arr[x]
		pairs[i+1] = arr[x+1]
		count = 1
	elif (diff == mini):
		i = i+2 
		pairs[i] = arr[x]
		pairs[i+1] = arr[x+1]
		count +=1 
final = pairs[0:2*count]
for j in xrange(0,2*count):
	print final[j],