import sys

# 2차원 평면 위의 점 N개
n = int(sys.stdin.readline())
arr = []
if (1 <= n <= 100000):
    # for문을 이용하여 한 줄씩 입력받은 좌표들을 [a,b] 형태의 배열로 묶은 후, arr에 저장한다.
    for i in range(n):
        [a, b] = map(int, input().split())
        arr.append([a, b])
    # [[3, 4], [1, 1], [1, -1], [2, 2], [3, 3]]
    # sort()는 arr.sort() 형식으로 "리스트형의 메소드"이며 리스트 원본값을 직접 수정합니다.
    # sorted()는 sorted(arr) 형식으로 "내장 함수"이며 리스트 원본 값은 그대로이고 정렬 값을 반환합니다.
    arr.sort()

    # 2차원 배열
    for i in range(n):
        print(arr[i][0], arr[i][1])