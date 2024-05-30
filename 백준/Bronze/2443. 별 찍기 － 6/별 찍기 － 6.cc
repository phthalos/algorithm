#include <iostream>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, i, j, k;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i; j++)
            cout << ' ';
        for (j = i; j < 2 * n - i - 1; j++)
            cout << '*';
        cout << "\n";
    }
}