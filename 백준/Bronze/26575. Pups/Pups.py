n = int(input())
for _ in range(n):
    d, f, p= map(float, input().split())
    result = d*f*p
    print('$%.2f' % result)