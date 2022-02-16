#include <iostream>
#include <vector>

using namespace std;

int main() {

    int t, n, size = 15 * 1e4 + 1, res, temp;
    cin >> t;

    while (t--) {
        cin >> n;
        vector<vector<int>> arr(size);

        for (int i = 0; i < n; i++) {
            cin >> temp;
            arr[temp].push_back(i);
        }

        res = -1;
        for (vector<int> nums : arr) {
            for (int i = 1; i < nums.size(); i++) {
                res = max(res, nums[i - 1] + n - nums[i]);
            }
        }

        cout << res << endl;
    }

    return 0;
}
