#include <iostream>

using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, i, j;
    for (i = 0; i < 3; i++)
    {
        int cnt = 0;

        for (j = 0; j < 4; j++)
        {
            cin >> n;
            if (n == 0)
            {
                cnt++;
            }
        }
        switch (cnt)
        {
        case 1:
            cout << 'A';
            break;
        case 2:
            cout << 'B';
            break;
        case 3:
            cout << 'C';
            break;
        case 4:
            cout << 'D';
            break;
        case 0:
            cout << 'E';
            break;
        }
        cout << "\n";
    }
}