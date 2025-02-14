#include <iostream>
using namespace std;
int main()
{
    int X, stick = 64, sum = 0, count = 0;
    cin >> X;

    if (X == 64)
    {
        cout << 1;
        return 0;
    }
    while (stick > 1)
    {
        stick /= 2;

        if (sum + stick <= X)
        {
            sum += stick;
            count++;
        }
    }
    cout << count;
        return 0;
}