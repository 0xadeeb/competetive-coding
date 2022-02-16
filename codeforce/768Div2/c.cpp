#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t, n, k;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        if (n == 4 && k == 3) {
            cout << "-1" << endl;
            continue;
        }
        cout << k << ' ' << n - 1 << endl;
        if (k && ~k)
            cout << (~k & n - 1) << ' ' << 0 << endl;
        for (int i = 1, j = n - 2; i < j; i++, j--) {
            if (i == k || j == k || j == (~k & n - 1) || i == (~k & n - 1))
                continue;
            else
                cout << i << ' ' << j << '\n';
        }
    }
    return 0;
}
