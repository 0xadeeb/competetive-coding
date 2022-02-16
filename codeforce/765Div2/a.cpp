#include <iostream>
#include <vector>

using namespace std;

int contains(int val, int bit) { return val & (1 << bit); }

int main() {

    int t, n, l, temp, res;
    cin >> t;
    while (t--) {
        cin >> n >> l;
        vector<int> count(l);
        for (int i = 0; i < n; i++) {
            cin >> temp;
            for (int i = 0; i < l; i++) {
                if (contains(temp, l - i - 1))
                    count[i]++;
            }
        }
        res = 0;
        for (int val : count) {
            if (2 * val > n)
                res = res * 2 + 1;
            else
                res *= 2;
            // cout << val << " " << n << " " << res << endl;
        }
        cout << res << endl;
    }

    return 0;
}
