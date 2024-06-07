// STL list를 이용한 코드

#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <string>
#include <vector>
#include <list>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    while (n--)
    {
        list<char> L = {};
        string txt;
        auto p = L.begin();
        cin >> txt;
        for (auto c : txt)
        {
            if (c == '<')
            {
                if (p != L.begin())
                    p--;
            }
            else if (c == '>')
            {
                if (p != L.end())
                    p++;
            }
            else if (c == '-')
            {
                if (p != L.begin())
                {
                    p--;
                    p = L.erase(p);
                }
            }
            else
            {
                L.insert(p, c);
            }
        }
        for (auto c : L)
        {
            cout << c;
        }
        cout << '\n';
    }
    return 0;
}