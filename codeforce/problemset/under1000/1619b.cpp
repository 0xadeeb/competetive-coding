#include <cmath>
#include <iostream>
#include <math.h>

using namespace std;
int main() {
    int t, res;
    long double n;
    cin >> t;
    while (t--) {
        cin >> n;
        res = (int)sqrt(n) + (int)cbrt(n) - (int)sqrt(cbrt(n));
        cout << res << endl;
    }
}
