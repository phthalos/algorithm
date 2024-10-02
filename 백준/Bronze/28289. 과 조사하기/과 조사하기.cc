#include <iostream>
using namespace std;

int p, g, c, n, s = 0, i = 0, a = 0, x = 0;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> p;
    while (p--)
    {
        cin >> g;
        if (g == 1)
        {
            x++;
            cin >> c >> n;
            continue;
        }
        else
        {
            cin >> c;
            switch (c)
            {
            case 1:
                s++;
                break;
            case 2:
                s++;
                break;
            case 3:
                i++;
                break;
            case 4:
                a++;
                break;
            default:
                break;
            }
            cin >> n;
        }
    }
    cout << s << "\n"
         << i << "\n"
         << a << "\n"
         << x << "\n";
    return 0;
}