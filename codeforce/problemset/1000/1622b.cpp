#include <iostream>
#include <queue>
#include <utility>
#include <vector>
using namespace std;

int main() {
    int t, n, c;
    char l;
    cin >> t;
    while (t--) {
        cin >> n;
        if (n == 1) {
            cin >> c >> l;
            cout << 1 << endl;
            continue;
        }
        vector<int> arr(n), res(n);
        auto cmp = [&](int x, int y) { return arr[x] > arr[y]; };
        priority_queue<int, vector<int>, decltype(cmp)> like(cmp), dont_like(cmp);

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        c = 0;
        for (int i = 0; i < n; i++) {
            cin >> l;
            if (l == '1')
                like.push(i);
            else {
                c++;
                dont_like.push(i);
            }
        }
        for (int i = 1; i <= c; i++) {
            res[dont_like.top()] = i;
            dont_like.pop();
        }
        for (int i = c + 1; i <= n; i++) {
            res[like.top()] = i;
            like.pop();
        }
        for (int rating : res)
            cout << rating << ' ';
        cout << endl;
    }
    return 0;
}
