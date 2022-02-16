#include <iostream>
using namespace std;

int main() {
    int t, a, b, c;
    cin >> t;
    while (t--) {
        cin >> a >> b >> c;
        int d;
        d = b - a;
        if (b + d > 0 && (b + d) % c == 0) {
            cout << "yes\n";
            continue;
        }
        d = c - b;
        if (b - d > 0 && (b - d) % a == 0) {
            cout << "yes\n";
            continue;
        }
        d = (c - a) / 2;
        if (a + d > 0 && (c - a) % 2 == 0 && (a + d) % b == 0) {
            cout << "yes\n";
            continue;
        }
        cout << "no\n";
    }
    return 0;
}
