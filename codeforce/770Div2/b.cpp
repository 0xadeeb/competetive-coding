#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t, n;
    long long x, y, temp;
    cin >> t;
    while (t--) {
        cin >> n >> x >> y;
        x = x & 1;
        for (int i = 0; i < n; i++) {
            cin >> temp;
            x = x ^ (temp & 1);
        }
        if ((y & 1) == x)
            cout << "Alice\n";
        else
            cout << "Bob\n";
    }
    return 0;
}
