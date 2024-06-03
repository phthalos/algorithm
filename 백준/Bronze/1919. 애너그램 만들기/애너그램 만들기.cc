#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <string>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, cnt = 0, arr[26] = {0};
    string a, b;
    cin >> a >> b;
    for (auto ca : a)
    {
        arr[ca - 'a']++;
    }
    for (auto cb : b)
    {
        arr[cb - 'a']--;
    }
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] != 0)
            cnt += abs(arr[i]);
    }
    cout << cnt;
}