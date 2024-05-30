#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    int i, n[5], s = 0, t;
    for (i = 0; i < 5; i++)
    {
        cin >> n[i];
        s += n[i];
    }
    sort(n, n + 5);
    cout << s / 5 << "\n" << n[2];
}