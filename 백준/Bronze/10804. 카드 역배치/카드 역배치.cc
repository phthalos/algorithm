#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int i, j, card[20], a, b, t;
    for (i = 0; i < 20; i++)
    {
        card[i] = i + 1;
    }
    for (i = 0; i < 10; i++)
    {
        cin >> a >> b;
        for (j = 0; j < floor(b - a) / 2; j++)
            swap(card[a - 1 + j], card[b - 1 - j]);
    }
    for (int k = 0; k < 20; k++)
    {
        cout << card[k] << ' ';
    }
}