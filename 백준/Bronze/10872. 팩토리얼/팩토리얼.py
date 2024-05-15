while True:
    try:
        s = 1
        n = int(input())
        if 0 <= n <= 12:
            for i in range(1, n+1, 1):
                s *= i
            print(s)
            break
        else:
            print("범위에맞는수를입력하세요")
    except:
        print("에러")