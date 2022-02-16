#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
    int t, n, k;
    bool pal;
    string word;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        cin >> word;
        if (!k) {
            cout << 1 << '\n';
            continue;
        }
        pal = true;
        for (int i = 0, j = n - 1; i < j; i++, j--) {
            if (word[i] != word[j]) {
                pal = false;
                break;
            }
        }
        if (pal)
            cout << 1 << '\n';
        else
            cout << 2 << '\n';
    }
    return 0;
}
