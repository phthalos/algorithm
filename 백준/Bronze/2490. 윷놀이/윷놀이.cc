#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, i, j;
    char s[] = "EABCD";
    for (i = 0; i < 3; i++)
    {
        int cnt = 0;
        for (j = 0; j < 4; j++)
        {
            cin >> n;
            if (n == 0) cnt++;
        }
        cout << s[cnt] << "\n";
    }
}