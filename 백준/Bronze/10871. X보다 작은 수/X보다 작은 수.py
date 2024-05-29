import sys

while True:
    try:
        n, x = map(int, sys.stdin.readline().split())
        if 1 <= n and x <= 10000:
            s = list(map(int, sys.stdin.readline().split()))
            for i in range(n):
                if s[i] < x:
                    print(s[i], end=" ")
            break
        else:
            print("out of range")
    except:
        print("err")
        break