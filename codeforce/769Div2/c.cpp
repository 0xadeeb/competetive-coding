#include <iostream>
using namespace std;

int main() {
    int t, a, b;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        if (b - a < (a | b) - b + 1) {
            cout << b - a << endl;
        } else {
            cout << (a | b) - b + 1;
        }
    }
    return 0;
}
