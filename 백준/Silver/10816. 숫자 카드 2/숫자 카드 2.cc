// 입력이 굉장히 많기 때문에, 시간 복잡도를 줄일 수 있는 방법을 사용하자.
#include <iostream>
#include <algorithm>
using namespace std;
int arr[500001], N, M, num;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> num;
        arr[i] = num;
    }
    sort(arr, arr + N);
    cin >> M;
    for (int i = 0; i < M; i++)
    {
        cin >> num;
        cout << upper_bound(arr, arr + N, num) - lower_bound(arr, arr + N, num) << " ";
    }
    return 0;
}