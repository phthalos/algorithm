import sys
input = sys.stdin.readline

a = int(input())
b = int(input())

x = b // 100
y = b // 10 - x * 10
z = b - x * 100 - y * 10
print(a*z,a*y,a*x,a*b, sep='\n')