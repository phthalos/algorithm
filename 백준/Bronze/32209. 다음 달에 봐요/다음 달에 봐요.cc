#include <iostream>
using namespace std;

int main() {
    int Q, x = 0;
    cin >> Q;
    
    while (Q--) {
        int a, b;
        cin >> a >> b;
        
        if (a == 1) {
            x += b;
        }
        else if (a == 2) {
            if (x < b) {
                cout << "Adios";
                return 0;
            }
            x -= b;
        }
    }
    cout << "See you next month";
    return 0;
}