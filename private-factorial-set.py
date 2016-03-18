from itertools import chain, combinations


def primes(n): # sieve of eratosthenes
    ps, sieve = [], [True] * (n + 1)
    for p in range(2, n + 1):
        if sieve[p]:
           ps.append(p)
           for i in range(p * p, n + 1, p):
               sieve[i] = False
    return sieve

prime = primes(1000000)
# print prime
def isPrime(i):
	if i == 1:
		return False
	return prime[i]

def factorialLength(n):
	if n == 0:
		return 0 
	count  = 0     
	arr =  reduce(list.__add__,([i, n//i] for i in range(1, int(n**0.5) + 1) if n % i == 0)) 
	# print "yo"
	# print arr
	for x in range(0,len(arr)):
		if isPrime(arr[x]):
			# print "yo"
			count+=1
	# print count
	return count
def pleasing(sumi,n):
  # values of factorial
  if n >= 2: 
  	return sumi[n]
  else:
  	return 0
    # print count ,"yo"
    # print x , "check"
  

def powerset(i):
	final = 0
	for z in chain.from_iterable(combinations(i, r) for r in range(len(i)+1)):
		count = 0 
		if len(z) > 0:
			for x in xrange(0,len(z)):
				count +=pleasing(z[x])
    		# print count , "powerset"
    		if count > 0 :
    			if count % 2 == 0 :
    				final = final + count
    	return final			



sumi = [0]*1000000
for x in xrange(2,1000000+1):
	sumi[x] = factorialLength(x) + sumi[x-1]



n = int(raw_input())
my_arr = map(int , raw_input().strip().split())

i = set(my_arr)
# factors
ans = powerset(i)

print ans


