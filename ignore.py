def palindromes(text):
    text = text.lower()
    results = []

    for i in range(len(text)):
        for j in range(0, i):
            chunk = text[j:i + 1]

            if chunk == chunk[::-1]:
                results.append(chunk)

    # print text.index(max(results, key=len)), results
    print len(max(results))


palindromes('byb')