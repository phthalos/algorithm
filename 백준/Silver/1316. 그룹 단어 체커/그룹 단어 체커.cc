#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N, groupword = 0;
    cin >> N;
    while (N--)
    {
        string word;
        bool isgroup = true;

        cin >> word;
        for (int i = 0; i < word.length(); i++)
        {
            for (int j = i + 1; j < word.length(); j++)
            {
                if (word[j - 1] != word[i] && word[j] == word[i])
                {
                    isgroup = false;
                    break;
                }
                if (!isgroup)
                    break;
            }
            if (!isgroup)
                break;
        }
        if (isgroup)
            groupword++;
    }
    cout << groupword;
    return 0;
}