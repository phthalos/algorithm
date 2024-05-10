n = int(input())
for i in range(n):
    # 0부터 n까지의 수에서, 각 자릿수를 더한 값을 digit_sum에 저장한다.
    # 만약 i가 234라면, 234+2+3+4 = 243를 저장한다.
    digit_sum = i + sum(map(int, str(i)))
    # 저장된 digit_sum이 n과 같으면 i를 출력한다.
    if digit_sum == n:
        print(i)
        break
else:
    print(0)