#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int t, firstx0, firstx1, lastx0, lastx1, firsty0, firsty1, lasty0, lasty1, k, temp;
    long long int res, w, h;
    cin >> t;
    while (t--) {
        cin >> w >> h;
        cin >> k;
        for (int i = 0; i < k; i++) {
            cin >> temp;
            if (i == 0)
                firstx0 = temp;
            if (i == k - 1)
                lastx0 = temp;
        }

        cin >> k;
        for (int i = 0; i < k; i++) {
            cin >> temp;
            if (i == 0)
                firstx1 = temp;
            if (i == k - 1)
                lastx1 = temp;
        }

        cin >> k;
        for (int i = 0; i < k; i++) {
            cin >> temp;
            if (i == 0)
                firsty0 = temp;
            if (i == k - 1)
                lasty0 = temp;
        }

        cin >> k;
        for (int i = 0; i < k; i++) {
            cin >> temp;
            if (i == 0)
                firsty1 = temp;
            if (i == k - 1)
                lasty1 = temp;
        }
        // cout << w << ' ' << h << endl;
        // cout << lastx0 << ' ' << firstx0 << endl;
        // cout << lastx1 << ' ' << firstx1 << endl;
        // cout << lasty0 << ' ' << firsty0 << endl;
        // cout << lasty1 << ' ' << firsty1 << endl;
        res = max(max(lastx0 - firstx0, lastx1 - firstx1) * h,
                  max(lasty0 - firsty0, lasty1 - firsty1) * w);
        cout << res << endl;
    }
    return 0;
}
