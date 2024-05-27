#include <iostream>
#include <queue>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    queue<int> que;
    int n, i;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        que.push(i);
    }
    while (que.size() > 1)
    {
        que.pop();
        que.push(que.front());
        que.pop();
    }
    cout << que.front();
    return 0;
}