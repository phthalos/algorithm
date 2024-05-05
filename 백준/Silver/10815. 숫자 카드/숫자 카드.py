import sys
input = sys.stdin.readline

n = int(input())
a_list = list(map(int, input().split()))
m = int(input())
b_list = list(map(int, input().split()))

a_list.sort()

def binary_search(arr, target, start, end):
    while start <= end:
        mid = (start + end) // 2
        if arr[mid] == target:
            return 1
        elif arr[mid] > target:
            end = mid - 1
        elif arr[mid] < target:
            start = mid + 1
        else:
            return None

for i in b_list:
    result = binary_search(a_list, i, 0, n-1)
    if result == None:
        print(0, end=' ')
    else:
        print(result, end=' ')