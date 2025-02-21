#include <iostream>
using namespace std;

int a, b, arr[1001], k = 1, sum = 0;

int main()
{
    for (int i = 1; i <= 1000; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (k > 1000)
                break;
            arr[k] = i;
            k++;
        }
    }
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        sum += arr[i];
    }
    cout << sum;
    return 0;
}