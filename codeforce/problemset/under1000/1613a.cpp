
#include <cmath>
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int t, p1, p2;
    long double n1, n2, l1, l2;
    cin >> t;
    while (t--) {
        cin >> n1 >> p1;
        cin >> n2 >> p2;
        l1 = floor(log10(n1));
        l2 = floor(log10(n2));
        // cout << n1 << ' ' << n2 << ' ' << p1 << ' ' << p2 << ' ' << l1 << ' '
        //      << l2 << endl;
        n1 /= pow(10, l1);
        n2 /= pow(10, l2);
        p1 += l1;
        p2 += l2;
        // cout << n1 << ' ' << n2 << ' ' << p1 << ' ' << p2 << ' ' << l1 << ' '
        //      << l2 << endl;
        if (p1 > p2)
            cout << ">\n";
        else if (p2 > p1)
            cout << "<\n";

        else {
            if (n1 > n2)
                cout << ">\n";
            else if (n2 > n1)
                cout << "<\n";
            else
                cout << "=\n";
        }
    }
    return 0;
}
