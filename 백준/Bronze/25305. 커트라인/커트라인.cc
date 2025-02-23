#include <iostream>
#include <algorithm>
using namespace std;

int N, k, x[1001];

int main()
{
    cin >> N >> k;
    for (int i = 0; i < N; i++)
        cin >> x[i];
    sort(x, x + N);
    cout << x[N - k];
    return 0;
}