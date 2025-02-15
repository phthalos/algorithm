#include <iostream>
using namespace std;
int N, K, arr[11], sum = 0;
int main()
{
    cin >> N >> K;
    for (int i = 0; i < N; i++)
        cin >> arr[i];
    for (int i = N - 1; i >= 0; i--)
    {
        sum += K / arr[i];
        K %= arr[i];
    }
    cout << sum << endl;
    return 0;
}