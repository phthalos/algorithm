#include <iostream>
using namespace std;
int B, x;
string N;
int main()
{
    cin >> N >> B;
    for (int i = 0; i < N.length(); i++)
    {
        if ('0' <= N[i] && N[i] <= '9')
            x = x * B + (N[i] - '0');
        else
            x = x * B + (N[i] - 'A' + 10);
    }
    cout << x;
    return 0;
}