#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, x1, x2, y1, y2, r1, r2;
    cin >> n;
    while (n--)
    {
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        // 두 점 사이의 거리
        double d = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
        if (d == 0 && r1 == r2)
        {
            cout << -1 << '\n';
        }
        else if (d > r1 + r2 || d < abs(r1 - r2))
        {
            cout << 0 << '\n';
        }
        else if (d == r1 + r2 || d == abs(r1 - r2))
        {
            cout << 1 << '\n';
        }
        else if (d < r1 + r2)
        {
            cout << 2 << '\n';
        }
    }
    return 0;
}