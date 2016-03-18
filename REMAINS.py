t = int(raw_input().strip())
for i in range(0,t):
    a , b , n = map(int , raw_input().strip().split())
    #print a , b , n
    sum = a + b
    x = 3
    while (x <= n):
        c = abs(a - b)
        sum+= c
        a = b
        b = c 
        x+=1
    print sum