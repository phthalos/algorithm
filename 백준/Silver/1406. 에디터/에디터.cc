// STL list를 이용한 코드

#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <string>
#include <vector>
#include <list>
using namespace std;

string txt;
int n, i;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> txt; // string을 입력받고
    list<char> L;
    for (auto c : txt) // 문자를 하나씩 배열에 삽입한다.
        L.push_back(c);
    auto cur = L.end(); // 커서는 문자 배열의 맨 마지막에 위치한다.
    cin >> n;
    while (n--)
    {
        char op;
        cin >> op;
        // L	커서를 왼쪽으로 한 칸 옮김 (커서가 문장의 맨 앞이면 무시됨)
        if (op == 'L')
        {
            if (cur != L.begin())
                cur--;
        }
        // D	커서를 오른쪽으로 한 칸 옮김 (커서가 문장의 맨 뒤이면 무시됨)
        else if (op == 'D')
        {
            if (cur != L.end())
                cur++;
        }
        // B	커서 왼쪽에 있는 문자를 삭제함 (커서가 문장의 맨 앞이면 무시됨)
        // 삭제로 인해 커서는 한 칸 왼쪽으로 이동한 것처럼 나타나지만, 실제로 커서의 오른쪽에 있던 문자는 그대로임
        else if (op == 'B')
        {
            if (cur != L.begin())
            {
                cur--;
                cur = L.erase(cur);
            }
        }
        // P $	$라는 문자를 커서 왼쪽에 추가함
        else // 'P'
        {
            char add;
            cin >> add;
            L.insert(cur, add);
        }
    }
    for (auto c : L)
        cout << c;

    return 0;
}