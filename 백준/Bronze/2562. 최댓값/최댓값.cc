#include <iostream>
using namespace std;
int n, i, mx, mi;
int main(void)
{
    ios::sync_with_stdio(0); cin.tie(0);
    for (i = 1; i <= 9; i++)
    {
        cin >> n;
        if (mx < n) // 전역변수는 0으로 초기화된다
        {
            mx = n;
            mi = i;
        }
    }
    cout << mx << "\n" << mi;
}