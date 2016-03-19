# from math import sqrt; from itertools import count, islice

# def sundaram3(max_n):
#     numbers = range(3, max_n+1, 2)
#     half = (max_n)//2
#     initial = 4

#     for step in xrange(3, max_n+1, 2):
#         for i in xrange(initial, half, step):
#             numbers[i-1] = 0
#         initial += 2*(step+1)

#         if initial > half:
#         	print [2] + filter(None, numbers)
#             # return [2] + filter(None, numbers)

# t = int(raw_input())
# for _ in range(0,t):
# 	n = int(raw_input())
# 	a = n+1
# 	while (a < (2 * n)):
# 		if(sundaram3(a)):
# 			print a
# 			break
# 		else:
# 			a=a+1;
# 			
# 			

# import math

# def prime_sieve(n):
#     """Use the Sieve of Eratosthenes to list primes 0 to n."""
#     primes = range(n+1)
#     primes[1] = 0
#     for i in range(4, n+1, 2):
#         primes[i] = 0
#     for x in range(3, int(math.sqrt(n))+1, 2):
#         if primes[x]:
#             for i in range(2*primes[x], n+1, primes[x]):
#                 primes[i] = 0
#     return filter(None, primes)

# def ranged_primes(x, y):
#     """List primes between x and y."""
#     primes = prime_sieve(int(math.sqrt(y)))
#     return [n for n in range(x, y) if all(n % p for p in primes)]



t = int(raw_input())
for _ in range(0,t):
	n = int(raw_input())
	x = ranged_primes(n+1,2*n)
	print x[0]
