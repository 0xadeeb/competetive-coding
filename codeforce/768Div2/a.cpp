#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<int> a(n), b(n);
        int maxa = 0, maxb = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            maxa = max(maxa, a[i]);
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
            maxb = max(maxb, b[i]);
        }

        if (maxa > maxb) {
            maxb = 0;
            for (int i = 0; i < n; i++) {
                maxb = max(maxb, min(a[i], b[i]));
            }
        } else {
            maxa = 0;
            for (int i = 0; i < n; i++) {
                maxa = max(maxa, min(a[i], b[i]));
            }
        }
        cout << maxa * maxb << endl;
    }
    return 0;
}
