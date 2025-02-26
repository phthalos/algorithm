#include <iostream>
using namespace std;

int N, F;

int main()
{
    cin >> N >> F;
    int start = (N / 100) * 100;
    for (int i = 0; i < 100; i++)
    {
        if (start % F == 0)
        {
            if (i < 10)
            {
                cout << "0" << i;
            }
            else
            {
                cout << i;
            }
            break;
        }
        else
        {
            start++;
        }
    }
    return 0;
}