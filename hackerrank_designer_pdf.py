def designerPdfViewer(h, word):
    small_dict = {}
    hchar = 0
    for i in range(0,26):
        small_dict[chr(i+ 97)] = h[i]

    for k in word:
        if hchar < small_dict[k]:
            hchar = small_dict[k]

    return hchar * len(word)
h = list(map(int,input().split()))
print(designerPdfViewer(h , word= input()))
