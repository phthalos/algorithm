#include <iostream>
using namespace std;

int N, cnt;

int main()
{
    cin >> N;
    for (int i = 5; i <= N; i *= 5)
        cnt += N / i;
    cout << cnt;
    return 0;
}