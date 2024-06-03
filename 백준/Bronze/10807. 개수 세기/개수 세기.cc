#include <iostream>
using namespace std;

int arr[201] = {};

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int i, n, v, t;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> t;
        arr[t + 100]++;
    }
    cin >> v;
    cout << arr[v + 100];
}