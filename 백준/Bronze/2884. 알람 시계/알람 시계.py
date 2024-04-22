h, m = map(int, input().split())
if 0 <= h <= 23 and 0<= m <= 59:
    if m-45 < 0:
        m = m + 15
        h = h - 1
        if h < 0:
            h = 23
        print(h, m)
    else:
        print(h,m-45)
else:
    print("out of range")