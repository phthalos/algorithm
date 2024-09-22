#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <string>
#include <vector>
#include <list>
#include <stack>
using namespace std;

int A;

int main(void)
{
    ios::sync_with_stdio(0);
    while (cin >> A)
    {
        (A % 6 == 0 ? cout << "Y\n" : cout << "N\n");
    }
    return 0;
}