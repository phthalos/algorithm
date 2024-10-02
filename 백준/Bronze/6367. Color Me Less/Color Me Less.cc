#include <iostream>
// #include <algorithm>
// #include <cstdlib>
#include <cmath>
// #include <string>
// #include <vector>
// #include <list>
// #include <stack>
using namespace std;

int rgb[16][3];
int calc[3];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    // 색상표 16종 입력받기
    for (int i = 0; i < 16; i++)
    {
        cin >> rgb[i][0] >> rgb[i][1] >> rgb[i][2];
        // cout << rgb[i][0] << " " << rgb[i][1] << " " << rgb[i][2] << "\n";
    }
    // cout << "-----------------------------\n";
    // 계산할 색상 입력받기
    while (1)
    {

        int idx = 0;
        int d = 255;
        cin >> calc[0] >> calc[1] >> calc[2];
        if (calc[0] == -1)
            break;
        // cout << calc[0] << " " << calc[1] << " " << calc[2] << "\n";
        for (int i = 0; i < 16; i++)
        {
            int r = pow(calc[0] - rgb[i][0], 2);
            int g = pow(calc[1] - rgb[i][1], 2);
            int b = pow(calc[2] - rgb[i][2], 2);
            int temp = sqrt(r + g + b);
            if (temp < d)
            {
                d = temp;
                idx = i;
            }
        }
        cout << "(" << calc[0] << "," << calc[1] << "," << calc[2] << ") maps to (" << rgb[idx][0] << "," << rgb[idx][1] << "," << rgb[idx][2] << ")\n";
    }

    return 0;
}