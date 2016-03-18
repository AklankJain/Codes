import sys

s = raw_input()

n = len(s);
m = n/3;
# print m
t = 'SOS'
count = 0
for x in xrange(0,m):
	for i in xrange(0,3):
		# print x , i
		# print s[3*x+i],
		# print t[i]
		if s[3*x+i] == t[i]:
			continue
		else:
			count+=1;

print count 