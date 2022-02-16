#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t, n, num, first, last;
    bool as;
    cin >> t;
    while (t--) {
        cin >> n;
        as = true;
        for (int i = 0; i < n; i++) {
            cin >> num;
            if (i == 0)
                first = num;
            if (i == n - 1)
                last = num;
            if (num != i + 1)
                as = false;
        }
        if (as)
            cout << "0\n";
        else if (first == 1 || last == n)
            cout << "1\n";
        else if (first == n && last == 1)
            cout << "3\n";
        else
            cout << "2\n";
    }
    return 0;
}
