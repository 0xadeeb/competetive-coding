
#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int t, n, a, i;
    cin >> t;
    while (t--) {
        cin >> n;
        for (i = 0; i <= sqrt(n); i++) {
            if (n % i == 0) {
                cout << n - i - 1 << " " << i << " " << 1 << endl;
                break;
            }
        }
        if (i == sqrt(n) + 1)
            cout << n / 2 << n / 2 + 1;
    }
    return 0;
}
