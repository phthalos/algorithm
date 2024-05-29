#include <iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, x, a;
    cin >> n >> x;
    while(n--){
        cin >> a;
        if (a < x) cout << a << ' ';
    }
}