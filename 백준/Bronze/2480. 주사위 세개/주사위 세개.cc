#include <iostream>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n[3], i, j, mx = 0;
    for (i = 0; i < 3; i++)
        cin >> n[i];
    if (n[0] == n[1] && n[1] == n[2])
    {
        cout << 10000 + n[0] * 1000;
        return 0;
    }
    for (i = 0; i < 3; i++)
    {
        for (j = i + 1; j < 3; j++)
        {
            if (n[i] == n[j])
            {
                cout << 1000 + n[i] * 100;
                return 0;
            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        if (n[i] > mx)
            mx = n[i];
    }
    cout << mx * 100;
    return 0;
}