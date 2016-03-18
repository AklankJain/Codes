def palindromes(text):
    text = text.lower()
    results = []

    for i in range(len(text)):
        for j in range(0, i):
            chunk = text[j:i + 1]

            if chunk == chunk[::-1]:
                results.append(chunk)

    print text.index(max(results, key=len)), results 
    # print results[len(results)-1],"hello"
    return len(results[len(results) -1])

t = int(raw_input())
for _ in xrange(0,t):
	a = raw_input()
	print a
	b = raw_input()
	print b
	sum_a = palindromes(a)
	sum_b = palindromes(b)
	print sum_a + sum_b