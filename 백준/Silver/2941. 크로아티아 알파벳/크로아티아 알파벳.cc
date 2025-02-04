// 크로아티아 알파벳과 일치하는 문자열을 #로 치환한 다음 문자열의 길이를 구하자.

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> croatian = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
    int idx;
    string str;

    cin >> str;

    for (int i = 0; i < croatian.size(); i++)
    {
        while (1)
        {
            idx = str.find(croatian[i]);
            if (idx == -1)
                break;
            str.replace(idx, croatian[i].length(), "#");
        }
    }
    cout << str.length();

    return 0;
}