#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n[3], t, i;
    cin >> n[0] >> n[1] >> n[2];
    for (i = 0; i < 3; i++)
    {
        for (int j = i; j < 3; j++)
        {
            if (n[i] > n[j])
            {
                t = n[i];
                n[i] = n[j];
                n[j] = t;
            }
        }
    }
    for (i = 0; i < 3; i++) cout << n[i] << ' ';
}