#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    string a, b;
    cin >> n;
    while (n--)
    {
        int i = 0;
        int str[26] = {0};
        cin >> a >> b;
        for (auto c : a)
            str[c - 'a']++;
        for (auto c : b)
            str[c - 'a']--;

        int impossible = 0;
        for (auto c : str)
        {
            if (c != 0)
            {
                cout << "Impossible\n";
                impossible++;
                break;
            }
        }
        if (impossible == 0)
            cout << "Possible\n";
    }
}