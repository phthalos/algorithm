#include <iostream>
#include <string>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(0); cin.tie(0);
    int alphabet[26] = {0}, i;
    string str;
    cin >> str;
    for (i = 0; i < str.length(); i++)
        alphabet[str[i] - 97]++;
    for (i = 0; i < 26; i++)
        cout << alphabet[i] << ' ';
}