#include <iostream>
#include <algorithm>
using namespace std;

int n, A[11];

int calc(int start, int end)
{
    int mul = 1;
    for (int i = start; i <= end; i++)
    {
        mul *= A[i];
    }
    return mul;
}

int main(void)
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> A[i];
    }

    int temp, ans = 0;
    for (int i = 1; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                temp = calc(1, i) + calc(i + 1, j) + calc(j + 1, k) + calc(k + 1, n);
                ans = max(ans, temp);
            }
        }
    }

    cout << ans;

    return 0;
}