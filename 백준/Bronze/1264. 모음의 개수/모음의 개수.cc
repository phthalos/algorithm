#include <iostream>
#include <string>
using namespace std;
int main()
{
    int count;
    string str;
    char vowel[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    while (getline(cin, str))
    {
        if (str == "#")
            break;
        count = 0;
        for (int i = 0; i < str.length(); i++)
        {
            for (char c : vowel)
            {
                if (str[i] == c)
                    count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}