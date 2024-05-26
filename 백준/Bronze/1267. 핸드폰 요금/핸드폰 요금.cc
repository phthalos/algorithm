#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
    int n, t, i, y = 0, m = 0;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> t;
        y += ceil(t / 30 + 1) * 10;
        m += ceil(t / 60 + 1) * 15;
    }
    if (y < m)
        cout << "Y " << y;
    else if (m < y)
        cout << "M " << m;
    else
        cout << "Y M " << y;
    return 0;
}