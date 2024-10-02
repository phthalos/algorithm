#include <iostream>
using namespace std;

int n, m, start, fin;
int *v;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    v = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cin >> m;
    while (m--)
    {
        int ans = 0;
        cin >> start >> fin;
        if (start == fin)
        {
            cout << v[start] << "\n";
        }
        else
        {
            for (int i = start; i <= fin; i++)
            {
                ans += v[i];
            }
            cout << ans << "\n";
        }
    }
    free(v);
    return 0;
}