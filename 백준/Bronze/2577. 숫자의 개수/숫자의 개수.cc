#include <iostream>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a, b, c, m, t, arr[10] = {};
    cin >> a >> b >> c;
    m = a * b * c;

    int i = 0;
    while (m > 0)
    {
        arr[m % 10]++;
        m /= 10;
    }
    for (i = 0; i < 10; i++)
        cout << arr[i] << "\n";
}