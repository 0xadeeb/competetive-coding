#include <functional>
#include <iostream>
#include <queue>
#include <utility>
#include <vector>

using namespace std;
typedef pair<int, int> pi;

int main() {
    int t, n, ram;
    cin >> t;

    while (t--) {
        cin >> n >> ram;
        priority_queue<pi, vector<pi>, greater<pi>> pq;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        for (int i = 0; i < n; i++)
            pq.push(make_pair(a[i], b[i]));

        while (!pq.empty() && pq.top().first <= ram) {
            ram += pq.top().second;
            pq.pop();
        }
        cout << ram << endl;
    }
    return 0;
}
