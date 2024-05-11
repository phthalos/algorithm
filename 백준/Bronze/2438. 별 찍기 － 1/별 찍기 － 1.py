while True:
    try:
        n = int(input())
        if 1 <= n <= 100:
            for i in range(1, n+1):
                print("*" * i)
            break
        else:
            print("out of range")
    except:
        print("err")
        break