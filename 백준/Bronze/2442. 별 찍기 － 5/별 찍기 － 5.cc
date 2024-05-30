#include <iostream>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(0); cin.tie(0);
    int n, i, j;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        for (j = i; j < n - 1; j++)
            cout << ' ';
        for (j = 0; j <= i * 2; j++)
            cout << '*';
        cout << "\n";
    }
}