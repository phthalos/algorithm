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
        for (k = 0; k < i; k++)
            cout << " ";
        for (j = i; j < n; j++)
            cout << "*";
        cout << "\n";
    }
}