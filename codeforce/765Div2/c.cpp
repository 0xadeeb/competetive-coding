#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <iostream>
#include <utility>
#include <vector>

using namespace std;

int helper(int i, int n, vector<pair<int, int>> dots, int k, int prev,
           int ***dp) {
    if (i == n)
        return 0;
    if (dp[i][prev][k] != 0)
        return dp[i][prev][k];

    int res = (dots[i + 1].first - dots[i].first) * dots[i].second +
              helper(i + 1, n, dots, k, i, dp);

    if (k)
        res = min(res, (dots[i + 1].first - dots[i].first) * dots[prev].second +
                           helper(i + 1, n, dots, k - 1, prev, dp));
    return dp[i][prev][k] = res;
}

int main() {
    int n, l, k;
    cin >> n >> l >> k;
    vector<pair<int, int>> dots(n + 1);
    int ***dp = (int ***)malloc(n * sizeof(int **));

    for (int i = 0; i < n; i++)
        dp[i] = (int **)malloc(n * sizeof(int *));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            dp[i][j] = (int *)calloc(n, sizeof(int));

    for (int i = 0; i < n; i++)
        cin >> dots[i].first;

    for (int i = 0; i < n; i++)
        cin >> dots[i].second;

    dots[n].first = l;
    int ans = helper(1, n, dots, k, 0, dp);
    ans = ans + dots[1].first * dots[0].second;
    cout << ans << endl;

    return 0;
}
