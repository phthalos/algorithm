#include <iostream>

using namespace std;

int main()
{
    int N, count = 0;
    cin >> N;

    for (int start = 1; start <= N; start++)
    {
        int sum = start;
        for (int end = start + 1; end <= N; end++)
        {
            sum += end;
            if (sum == N)
            {
                count++;
                break;
            }
            else if (sum > N)
            {
                break;
            }
        }
    }
    count++;
    cout << count;
    return 0;
}