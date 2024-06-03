#include <iostream>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, i, set[10] = {0}, mx = 0;
    cin >> n;
    while (n > 0)
    {
        set[n % 10]++;
        n /= 10;
    }

    for (i = 0; i < 10; i++)
    {
        if (i == 6 || i == 9)
            continue;
        if (set[i] > mx)
        {
            mx = set[i];
        }
    }
    int reuse = (set[6] + set[9] + 1) / 2;
    if (mx > reuse)
        cout << mx;
    else
        cout << reuse;
}