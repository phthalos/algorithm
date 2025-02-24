#include <iostream>
#include <string>
using namespace std;

string A, B;
long long int sum;

int main()
{
    cin >> A >> B;

    int n = A.length();
    int m = B.length();

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            sum += (A[i] - '0') * (B[j] - '0');
        }
    }
    cout << sum;
    return 0;
}