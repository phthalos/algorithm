arr = [
    "Never gonna give you up",
    "Never gonna let you down",
    "Never gonna run around and desert you",
    "Never gonna make you cry",
    "Never gonna say goodbye",
    "Never gonna tell a lie and hurt you",
    "Never gonna stop",
]

n = int(input())
check = 0

for _ in range(n):
    s = input()
    if s not in arr:
        check = 1
        break

if check:
    print("Yes")
else:
    print("No")