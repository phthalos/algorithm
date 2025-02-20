#include <iostream>
#include <string>
using namespace std;
int N, title = 666, series;
string target;
int main()
{
    cin >> N;
    while (1)
    {
        target = to_string(title);
        for (int i = 0; i < target.length() - 2; i++)
        {
            if (target[i] == '6' && target[i + 1] == '6' && target[i + 2] == '6')
            {
                series++;
                if (series == N)
                {
                    cout << title;
                    return 0;
                }
                break;
            }
        }
        title++;
    }
    return 0;
}