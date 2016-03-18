string = raw_input()
str_list = list(string)
count =0 
for x in xrange(0,len(string)-1):
	if str_list[x] != "M":
		if str_list[x] == str_list[x+1]:
			count +=1
		elif str_list[x+1] == "M":
			if str_list[x] == "A":
				str_list[x+1] = "C"
			else:
				str_list[x+1] = "M"
	else:
		if str_list[x+1] == "A":
			str_list[x] = "C"
		elif str_list[x+1] == "C":
			str_list[x] = "A"
		else:
			str_list[x] = "A"

print count
