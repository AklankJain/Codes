import collections
flag = 0
string = raw_input()
letters = collections.Counter(string)
if len(letters) > 2:
	print "0"
elif len(letters) <2:
	print "0"
else:
	for name in string:
		if letters[name] == 1:
			flag = 1
	if flag == 1:
		print len(string)
	else:
		print "0"

	