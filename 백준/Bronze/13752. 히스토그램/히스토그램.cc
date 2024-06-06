#include <iostream>
using namespace std;

int main(void)
{
    int n, h;
    cin >> n;
    while (n--)
    {
        cin >> h;
        while (h--)
            cout << '=';
        cout << '\n';
    }
    return 0;
}