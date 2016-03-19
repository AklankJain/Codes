t = int(raw_input())
for i in range(0,t):
	n,k = map(int ,raw_input().strip().split(' '))

	handshakes = (k*(k+1))/2
	print handshakes