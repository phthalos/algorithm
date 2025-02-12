#include <iostream>
#include <string>
using namespace std;
int main()
{
    string X;
    int count = 0;
    cin >> X;
    while (X.size() > 1)
    {
        int sum = 0;
        for (int i = 0; i < X.size(); i++)
        {
            sum += X[i] - '0'; // string number to int
        }
        X = to_string(sum);
        count++;
    }

    cout << count << endl;
    (stoi(X) % 3 == 0) ? cout << "YES" : cout << "NO";
    return 0;
}