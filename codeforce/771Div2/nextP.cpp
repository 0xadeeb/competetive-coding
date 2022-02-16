/*
                            C++ template for competitive coding

                                        _oo0oo_
                                       o8888888o
                                       88" . "88
                                       (| -_- |)
                                       0\  =  /0
                                     ___/`---'\___
                                   .' \\|     |// '.
                                  / \\|||  :  |||// \
                                 / _||||| -:- |||||- \
                                |   | \\\  -  /// |   |
                                | \_|  ''\---/''  |_/ |
                                \  .-\__  '-'  ___/-. /
                              ___'. .'  /--.--\  `. .'___
                           ."" '<  `.___\_<|>_/___.' >' "".
                          | | :  `- \`.;`\ _ /`;.`/ - ` : | |
                          \  \ `_.   \_ __\ /__ _/   .-` /  /
                         =====`-.____`.___ \_____/___.-`___.-'=====
                                        `=---='

 Note: This template uses some c++11 functions , so you have to compile it with c++11 flag.
        Example:-   $ g++ -std=c++11 c++Template.cpp
 Adeeb HS

 */

/********   All Required Header Files ********/
#include <algorithm>
#include <assert.h>
#include <bitset>
#include <cstdint>
#include <deque>
#include <functional>
#include <iostream>
#include <iterator>
#include <limits>
#include <list>
#include <map>
#include <math.h>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <time.h>
#include <utility>
#include <vector>

using namespace std;

/*******  All Required define Pre-Processors and typedef Constants *******/
#define scd(t) scanf("%d", &t)
#define scld(t) scanf("%ld", &t)
#define sclld(t) scanf("%lld", &t)
#define scc(t) scanf("%c", &t)
#define scs(t) scanf("%s", t)
#define scf(t) scanf("%f", &t)
#define sclf(t) scanf("%lf", &t)
#define mem(a, b) memset(a, (b), sizeof(a))
#define f(i, j, n, in) for (int i = j; i < n; i += in)
#define rf(i, j, n, in) for (int i = n; i >= k; i -= in)
#define rep(i, n) f(i, 0, n, 1)
#define rrep(i, n) rf(i, n - 1, 0, 1)
#define all(cont) cont.begin(), cont.end()
#define rall(cont) cont.end(), cont.begin()
#define foreach(it, l) for (auto it = l.begin(); it != l.end(); it++)
#define in(A, B, C) assert(B <= A && A <= C)
#define mp make_pair
#define pb push_back
#define inf (int)1e9
#define eps 1e-9
#define Pi 3.1415926535897932384626433832795
#define mod 1000000007
const double pi = acos(-1.0);
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<pii> vii;
typedef vector<vi> vvi;
typedef map<int, int> mpii;
typedef set<int> seti;
typedef multiset<int> mseti;
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int ll;
typedef unsigned long long int ull;

void solve();
inline void yes() { cout << "YES\n"; }
inline void no() { cout << "NO\n"; }

/****** Template of some basic operations *****/
template <typename T, typename U> inline void amin(T &x, U y) {
    if (y < x)
        x = y;
}
template <typename T, typename U> inline void amax(T &x, U y) {
    if (x < y)
        x = y;
}
/**********************************************/

/******* Debugging Class Template *******/
#define DEBUG

#ifdef DEBUG

#define debug(args...) (Debugger()), args

class Debugger {
public:
    Debugger(const std::string &_separator = " - ") : first(true), separator(_separator) {}

    template <typename ObjectType> Debugger &operator,(const ObjectType &v) {
        if (!first)
            std::cerr << separator;
        std::cerr << v;
        first = false;
        return *this;
    }
    ~Debugger() {
    std:
        cerr << endl;
    }

private:
    bool first;
    std::string separator;
};

#else
#define debug(args...) // Just strip off all debug tokens
#endif

/**************************************/

void solve(vector<int> &nums) {
    /*
    ** Solution goes here
    */
    int n = nums.size(), k, l;
    for (k = n - 2; k >= 0; k--) {
        if (nums[k] < nums[k + 1]) {
            break;
        }
    }
    if (k < 0) {
        reverse(nums.begin(), nums.end());
    } else {
        for (l = n - 1; l > k; l--) {
            if (nums[l] > nums[k]) {
                break;
            }
        }
        swap(nums[k], nums[l]);
        reverse(nums.begin() + k + 1, nums.end());
    }
}
/********** Main()  function **********/
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int tc = 24, i = 0, n = 4;
    vector<int> nums(n);
    rep(j, n) nums[j] = j + 1;

    while (i < tc) {
        solve(nums);
        cout << i++ << ": ";
        rep(j, n) cout << nums[j] << ' ';
        cout << endl;
    }
    return 0;
}
/******** Main() Ends Here *************/

/******** User-defined Function *******/

/**************************************/

/******** Solution Funtion *************/
/******** Solve() Ends Here *************/
