#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        char a, b;
        cin >> n;
        if (n > 2) {
            for (int i = 0; i < n; i++)
                cin >> a;
            cout << "NO\n";
        } else if (n == 1) {
            cin >> a;
            cout << "YES\n";
        } else {
            cin >> a >> b;
            if (a == b)
                cout << "NO\n";
            else
                cout << "YES\n";
        }
    }
    return 0;
}
