#include <cstdint>
#include <iostream>
#include <string>
using namespace std;

int find(string num, char a, char b, char c) {
    int i = 0, n = num.size();
    while (i < n) {
        if (num[n - i - 1] == a)
            break;
        i++;
    }
    i++;
    while (i < n) {
        if (num[n - i - 1] == b || num[n - i - 1] == c)
            break;
        i++;
    }
    return i >= n ? 25 : i - 1;
}

int main() {
    int t;
    string num;
    cin >> t;
    while (t--) {
        cin >> num;
        cout << min(find(num, '0', '0', '5'), find(num, '5', '2', '7')) << '\n';
    }
    return 0;
}
