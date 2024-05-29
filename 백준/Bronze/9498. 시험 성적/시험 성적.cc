#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    char r;
    cin >> n;
    if(90 <= n && n <= 100) r='A';
    else if (80 <= n && n <= 89) r='B';
    else if (70 <= n && n <= 79) r='C';
    else if (60 <= n && n <= 69) r='D';
    else r='F';
    cout<<r;
}