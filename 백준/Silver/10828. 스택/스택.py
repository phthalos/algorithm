import sys
input = sys.stdin.readline

n = int(input())
cmd = [input() for _ in range(n)]
a = []
for i in cmd:
    if "push" in i.split()[0]:
        a.append(int(i.split()[1]))
    elif "pop" in i:
        print(a.pop() if a else -1)
    elif "size" in i:
        print(len(a))
    elif "empty" in i:
        print(0 if a else 1)
    elif "top" in i:
        print(a[-1] if a else -1)