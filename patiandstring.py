t = int(raw_input())
for _ in xrange(0,t):
	maxi = 0
	n = int(raw_input())
	sentence = raw_input()
	for x in range(97,123):
		 no = sentence.count(str(unichr(x)))
		 if no > maxi:
		 	maxi = no
	# print maxi
	if (maxi % 2) ==0:
		print "Yes"
	else:
		print "No"

