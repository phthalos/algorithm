#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;

    int x1 = 0, y1 = 0, z1 = 0, x2 = 1000, y2 = 1000, z2 = 1000, x, y, z;

    while (N--)
    {
        int x3, y3, z3, x4, y4, z4;
        cin >> x3 >> y3 >> z3 >> x4 >> y4 >> z4;
        if (x1 < x3)
            x1 = x3; // 가장 늦은 시작점 (최댓값)
        if (y1 < y3)
            y1 = y3;
        if (z1 < z3)
            z1 = z3;

        if (x2 > x4)
            x2 = x4; // 가장 이른 종점 (최소값)
        if (y2 > y4)
            y2 = y4;
        if (z2 > z4)
            z2 = z4;
    }

    if ((x2 - x1) > 0)
    {
        x = x2 - x1;
    }
    else
    {
        cout << 0;
        return 0;
    }

    if ((y2 - y1) > 0)
    {
        y = y2 - y1;
    }
    else
    {
        cout << 0;
        return 0;
    }
    if ((z2 - z1) > 0)
    {
        z = z2 - z1;
    }
    else
    {
        cout << 0;
        return 0;
    }

    cout << x * y * z;

    return 0;
}