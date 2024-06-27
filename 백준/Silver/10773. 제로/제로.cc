#include <iostream>
#include <stack>
using namespace std;

int N, K;
int result;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    stack<int> S;
    while (N--)
    {
        cin >> K;
        if (K == 0)
        {
            // 정수가 0일 경우 지울 수 있는 수가 있음을 보장할 수 있으므로, 스택이 비어있는지에 대한 여부는 따로 검사하지 않는다.
            S.pop();
        }
        else
        {
            S.push(K);
        }
    }

    int len = S.size();
    for (int i = 0; i < len; i++)
    {
        result += S.top();
        S.pop();
    }
    cout << result;

    return 0;
}