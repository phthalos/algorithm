#include <iostream>

using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, i, s = 0, t = 100, cnt = 0;
    for (i = 0; i < 7; i++)
    {
        cin >> n;
        if (n % 2 != 0)
        {
            s += n;
            if (t > n)
                t = n;
        }
        else
            cnt++;
    }
    if (cnt == 7)
        cout << "-1";
    else
        cout << s << "\n"
             << t;
}