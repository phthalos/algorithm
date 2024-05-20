input()
n = map(int, input().split())
m = [i%2 for i in n]
print('Sad' if m.count(1) >= m.count(0) else 'Happy')