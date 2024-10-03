n = int(input())
s = []
for _ in range(n):
  c = list(map(int, input().split()))
  mx = 0
  for i in range(5):
    for j in range(i + 1, 5):
      for k in range(j + 1, 5):
        d = (c[i] + c[j] + c[k]) % 10
        if d >= mx:
          mx = d
  s.append(mx)

for i in range(n - 1, -1, -1):
  if s[i] == max(s):
    print(i + 1)
    break