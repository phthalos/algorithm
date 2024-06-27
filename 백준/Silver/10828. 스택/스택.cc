#include <iostream>
#include <stack>
using namespace std;

int N;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    stack<int> S;
    while (N--)
    {
        string c;
        cin >> c;
        // 스택에 정수를 추가한다.
        if (c == "push")
        {
            int t;
            cin >> t;
            S.push(t);
        }
        // 스택의 가장 위에 있는 정수를 출력하고, 그 정수를 제거한다.
        else if (c == "pop")
        {
            // 배열이 비어있을 때 .pop()을 실행하면 런타임 에러가 발생한다.
            if (S.empty())
                cout << -1 << '\n';
            else
            {
                cout << S.top() << '\n';
                S.pop();
            }
        }
        // 스택에 들어 있는 정수의 개수를 출력한다. (스택의 크기)
        else if (c == "size")
            cout << S.size() << '\n';
        // 스택이 비어 있을 경우 1, 아니면 0을 출력한다. 기본적으로 boolean이므로 int로 형변환을 해 주면 된다.
        else if (c == "empty")
            cout << S.empty() << '\n';
        // 스택의 가장 위에 있는 정수를 출력한다.
        else // top
        {
            if (S.empty())
                cout << -1 << '\n';
            else
                cout << S.top() << '\n';
        }
    }

    return 0;
}