#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t, n, k, res;
    cin >> t;

    while (t--) {
        cin >> n;
        if (n == 1) {
            cin >> n;
            cout << '0' << endl;
            continue;
        }
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        k = 1;
        res = 0;
        while (k < n) {
            for (int i = n - k - 1; i >= 0; i--) {
                if (arr[i] != arr[n - 1])
                    break;
                k++;
            }
            if (k < n)
                res++;
            k *= 2;
        }

        cout << res << endl;
    }

    return 0;
}
