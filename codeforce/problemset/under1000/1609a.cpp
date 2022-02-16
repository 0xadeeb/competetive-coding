#include <iostream>
#include <type_traits>
#include <vector>
using namespace std;

int main() {
    int t, n, m, power;
    long long int res;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<int> nums(n);
        m = -1;
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }
        res = power = 0;

        for (int i = 0; i < n; i++) {
            while (!(nums[i] & 1)) {
                power++;
                nums[i] /= 2;
            }
            m = max(m, nums[i]);
            res += nums[i];
        }
        //        cout << res << ' ' << m << ' ' << power << endl;
        res -= m;
        res += ((1ll * m) << power);
        cout << res << endl;
    }
    return 0;
}
