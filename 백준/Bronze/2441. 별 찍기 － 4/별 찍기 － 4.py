import sys
input = sys.stdin.readline
n = int(input())

for i in range(n+1):
    print(" "*i + "*"*n)
    n -= 1