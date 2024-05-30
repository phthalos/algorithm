#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long a, b, t;
    cin >> a >> b;
    if (b > a)
    {
        t = a;
        a = b;
        b = t;
    }
    if (a == b || a - b == 1)
    {
        cout << 0;
        return 0;
    }
    else
        cout << a - b - 1 << "\n";
    while (a != b + 1)
    {
        cout << b + 1 << ' ';
        b++;
    }
}