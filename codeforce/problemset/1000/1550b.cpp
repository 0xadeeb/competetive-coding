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

/******* Debugging Functions Template *******/
#ifndef ONLINE_JUDGE

void _print() { cerr << "]\n"; }
void __print(int x) { cerr << x; }
void __print(long x) { cerr << x; }
void __print(long long x) { cerr << x; }
void __print(unsigned x) { cerr << x; }
void __print(unsigned long x) { cerr << x; }
void __print(unsigned long long x) { cerr << x; }
void __print(float x) { cerr << x; }
void __print(double x) { cerr << x; }
void __print(long double x) { cerr << x; }
void __print(char x) { cerr << '\'' << x << '\''; }
void __print(const char *x) { cerr << '\"' << x << '\"'; }
void __print(const string &x) { cerr << '\"' << x << '\"'; }
void __print(bool x) { cerr << (x ? "True" : "False"); }

template <typename T, typename V> void __print(const pair<T, V> &x) {
    cerr << '{';
    __print(x.first);
    cerr << ',';
    __print(x.second);
    cerr << '}';
}
template <typename T> void __print(const T &x) {
    int f = 0;
    cerr << '{';
    for (auto &i : x)
        cerr << (f++ ? "," : ""), __print(i);
    cerr << "}";
}
template <typename T, typename... V> void _print(T t, V... v) {
    __print(t);
    if (sizeof...(v))
        cerr << ", ";
    _print(v...);
}

#define debug(args...)                                                                             \
    cerr << "[" << #args << "] = \n[";                                                             \
    _print(args);

#else
#define debug(args...) // Just strip off all debug tokens
#endif

/**************************************/

/********** Main()  function **********/
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int tc;
    cin >> tc;

    while (tc--) {
        solve();
    }
    return 0;
}
/******** Main() Ends Here *************/

/******** User-defined Function *******/

/**************************************/

/******** Solution Funtion *************/
inline void solve() {
    /*
    ** Solution goes here
    */
    int a, b, n, g1 = 0, g0 = 0;
    char prev = 0, curr;
    cin >> n >> a >> b;

    rep(i, n) {
        cin >> curr;
        if (curr != prev) {
            if (curr == '0')
                g0++;
            else
                g1++;
            prev = curr;
        }
    }
    if (b >= 0) {
        cout << (a + b) * n << endl;
        return;
    } else
        cout << (a * n + (min(g0, g1) + 1) * b) << endl;
}
/******** Solve() Ends Here *************/
