#include <iostream>
using namespace std;

int d(int number)
{
    int sum = number;

    while (number)
    {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}

int main()
{
    bool check[10001]{false};
    for (int i = 1; i < 10001; i++)
    {
        int n = d(i);
        if (n < 10001)
            check[n] = true;
    }
    for (int i = 1; i < 10001; i++)
    {
        if (!check[i])
            cout << i << endl;
    }
    return 0;
}