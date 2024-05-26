#include <iostream>

int main(void)
{
    int n, d, i, cnt = 0;
    std::cin >> d;
    for (i = 0; i < 5; i++)
    {
        std::cin >> n;
        if (n == d)
            cnt++;
    }
    std::cout << cnt;
    return 0;
}