while True:
    try:
        t = sorted(list(map(int, input().split())))
        if t[0] == t[1] == t[2] == 0:
            print()
            break
        elif t[0]**2 + t[1]**2 == t[2]**2:
            print("right")
        else:
            print("wrong")
    except:
        break