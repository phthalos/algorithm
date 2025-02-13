#include <iostream>
using namespace std;

int main(void)
{
    int L, A, B, C, D, korean, math;
    cin >> L >> A >> B >> C >> D;
    korean = A / C;
    A %= C;
    if (A > 0)
        korean++;
    math = B / D;
    B %= D;
    if (B > 0)
        math++;
    cout << L - max(korean, math) << endl;
    return 0;
}