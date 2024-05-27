#include <iostream>
#include <queue>
using namespace std;

int main(void)
{
    queue<int> que;
    int n, t, i, y = 0, m = 0;
    cin >> n;
    while (n--)
    {
        string str;
        cin >> str;
        if (str == "push")
        {
            int value;
            cin >> value;
            que.push(value);
        }
        else if (str == "front")
        {
            if (que.empty())
                cout << -1 << '\n';
            else
                cout << que.front() << '\n';
        }
        else if (str == "back")
        {
            if (que.empty())
                cout << -1 << '\n';
            else
                cout << que.back() << '\n';
        }
        else if (str == "size")
        {
            cout << que.size() << '\n';
        }
        else if (str == "empty")
        {
            cout << que.empty() << '\n';
        }
        else if (str == "pop")
        {
            if (que.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << que.front() << '\n';
                que.pop();
            }
        }
    }
    return 0;
}