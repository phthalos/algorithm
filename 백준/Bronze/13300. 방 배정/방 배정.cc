#include <iostream>
using namespace std;

int n, k, room;
int s[2][7] = {};

int main(void)
{
    ios::sync_with_stdio(0); cin.tie(0);

    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        s[a][b]++;
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 1; j < 7; j++)
        {
            room += s[i][j] / k;
            if (s[i][j] % k)
                room++;
        }
    }
    cout << room;
}