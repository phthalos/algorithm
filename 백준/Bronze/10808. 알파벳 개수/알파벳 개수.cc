#include <iostream>
#include <string>
using namespace std;
int n, i, mx, mi;
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int alphabet[26] = {0};
    string str;
    cin >> str;
    for (int i = 0; i < str.length(); i++)
        alphabet[str[i] - 97]++;
    for (int i = 0; i < 26; i++)
        cout << alphabet[i] << ' ';
}