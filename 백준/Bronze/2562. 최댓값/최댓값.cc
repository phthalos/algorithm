#include <iostream>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n[9], i, t = 0, cnt = 0;
    for (i = 0; i < 9; i++)
    {
        cin >> n[i];
        if (t < n[i]) t = n[i];
    }
    for (i = 0; i < 9; i++)
    {
        if (n[i] == t)
        {
            cout << t << "\n" << i + 1;
            break;
        }
    }
}