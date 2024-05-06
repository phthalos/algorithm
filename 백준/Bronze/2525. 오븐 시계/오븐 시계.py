import sys
input = sys.stdin.readline

H, M = map(int, input().split())
time = int(input())
M += time
if M > 59:
    H += M // 60
    M = M % 60
    if H > 23:
        H = H % 24
        print(H,M)
    else:
        print(H,M)
else: print(H,M)