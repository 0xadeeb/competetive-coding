#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int t, i, m, size = 2 * 1e5;
    cin >> t;

    char *num = (char *)malloc(size * sizeof(char));

    while (t--) {
        scanf("%s", num);
        i = strlen(num) - 1;
        while (i) {
            m = num[i] + num[i - 1] - 96;
            if (m > 9) {
                num[i] = (m % 10) + '0';
                num[i - 1] = (m / 10) + '0';
                break;
            }
            i--;
        }
        if (!i) {
            num[1] += (num[0] - '0');
            printf("%s\n", num + 1);
        } else {
            printf("%s\n", num);
        }
    }
    return 0;
}
