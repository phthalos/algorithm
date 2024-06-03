#include <iostream>
using namespace std;

int arr[2000001] = {};

int main(void)
{
    ios::sync_with_stdio(0); cin.tie(0);
    int n, t, x, i, cnt = 0;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> t;
        arr[t]++;
    }
    cin >> x;

    for (i = 0; i < (x + 1) / 2; i++)
    {
        if (arr[i] == 1 && arr[x - i] == 1) // 배열의 양 끝을 더하면 x가 되니까
            cnt++; // 양 끝 숫자가 모두 존재할(1로 기록됨) 경우 숫자 쌍의 갯수를 증가시킴
    }
    cout << cnt;
}