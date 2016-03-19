a = raw_input()
b = raw_input()
n = raw_input()
seq = []
seq[0] = a + b
print seq ,
for i in range(1,n):
	seq[i] = seq[i-1] + (b**i)*b
	print seq[i] ,