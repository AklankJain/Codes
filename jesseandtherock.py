n , sj = map(int , raw_input().strip().split())

sr = map(int , raw_input().strip().split())
flag = 0 
x = 0
count = 0
while x < n:
	pass:
	if sj>= sr[x]:
		x+=1
		count+=1
	elif sj < sr[x] and flag == 0:
		x+=1
		flag = 1
	else:
		break
print count
