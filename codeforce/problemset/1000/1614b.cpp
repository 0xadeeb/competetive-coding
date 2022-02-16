#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int main() {
    int t, n;
    long long dist;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<pair<int, int>> arr(n);
        vector<int> res(n + 1);
        for (int i = 0; i < n; i++) {
            cin >> arr[i].first;
            arr[i].second = i + 1;
        }

        sort(arr.rbegin(), arr.rend());
        res[0] = 0;
        dist = 0;
        for (int i = 0; i < (n + 1) / 2; i++) {
            res[arr[2 * i].second] = i + 1;
            dist += 2ll * arr[2 * i].first * (i + 1);
            if (2 * i + 1 < n) {
                res[arr[2 * i + 1].second] = -1 * i - 1;
                dist += 2ll * arr[2 * i + 1].first * (i + 1);
            }
        }

        cout << dist << '\n';
        for (int ele : res)
            cout << ele << ' ';
        cout << endl;
    }
    return 0;
}
