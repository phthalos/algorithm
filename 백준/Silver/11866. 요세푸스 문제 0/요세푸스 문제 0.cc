#include <iostream>
#include <queue>
using namespace std;

int main(void)
{
    int n, k;
    queue<int> q;

    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        q.push(i); // 주어진 n, k로 문제를 풀기 위한 숫자 배열을 만든다.
    cout << "<";

    while (q.empty() == 0)
    {
        for (int i = 1; i < k; i++) // 1부터 k번째 원소를
        {
            q.push(q.front()); // 큐의 맨 뒤로 보내고
            q.pop();           // 보낸 원소를 삭제한다. (k=3일 경우, 1, 2는 뒤로 보내진 후 삭제된다. 그리고 while 루프로 인해 for문이 또다시 호출된다.)
        }
        cout << q.front(); // 현재 맨 앞의 원소(3)를 출력한다.
        if (q.size() > 1)  // 큐의 크기가 1보다 클 경우(2이상일 경우) ','를 출력한다.
            cout << ", ";
        q.pop(); // 3을 출력했으므로, 3은 배열에서 삭제한다.
    }
    cout << ">";

    return 0;
}