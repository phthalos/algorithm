s = str(input())
a = []
if 1 <= len(s) <= 100:
    for i in range(len(s)):
        a.append(ord(s[i]))
    for i in range(ord("a"), ord("z")+1):
        if i in a:
            print(a.index(i), end=" ")
        else:
            print(-1, end=" ")
else:
    print("too long")