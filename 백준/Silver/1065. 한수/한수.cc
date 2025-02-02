// 1~99는 한수이다.
// 1000은 한수가 아니다.
// 100~999만 계산하자.

#include <iostream>
using namespace std;

int main()
{
    // 입력, 한수의 개수
    int N, cnt = 0;
    cin >> N;

    if (N < 100) // 1~99
    {
        cout << N;
        return 0;
    }
    else // 99~1000
    {
        cnt = 99;
        for (int i = 100; i <= N; i++)
        {
            int a, b, c;
            a = i % 10;        // 1의 자리
            b = (i / 10) % 10; // 10의 자리
            c = i / 100;       // 100의 자리

            if ((c - b) == (b - a))
            {
                cnt++;
            }
        }
    }
    cout << cnt;

    return 0;
}