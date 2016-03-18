import re
yo = raw_input()
arr = filter(None, re.split("[, '.@+_\!?]+", yo))
print len(arr)
for x in xrange(0,len(arr)):
	print arr[x]


