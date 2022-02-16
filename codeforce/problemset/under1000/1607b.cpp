#include <iostream>
#include <type_traits>
using namespace std;

int mod(int num, int d) { return (d + (num % d)) % d; }

int main() {
    long long int t, n, x, res;
    cin >> t;
    while (t--) {
        cin >> x >> n;
        if (!n) {
            cout << x << '\n';
            continue;
        }
        switch ((n - 1) % 4) {
        case 1:
            res = n;
            break;
        case 2:
            res = 2 * n - 1;
            break;
        case 3:
            res = n - 3;
            break;
        default:
            res = 0;
        }
        res -= ((n - 1) >> 2) * 4;
        res--;
        if ((x % 2 + 2) % 2)
            res = -1 * res;

        cout << x + res << '\n';
    }
    return 0;
}
