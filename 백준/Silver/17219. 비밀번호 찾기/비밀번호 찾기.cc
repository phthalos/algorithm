#include <iostream>
#include <map>
using namespace std;

int N, M;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    map<string, string> m;
    string url, pw;

    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        cin >> url >> pw;
        m[url] = pw;
    }
    for (int i = 0; i < M; i++)
    {
        cin >> url;
        cout << m[url] << '\n';
    }
    return 0;
}