#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <vector>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }

int main() {
    fio();
    int T; cin >> T;
    while (T--) {
        int x;
        cin >> x;
        
        int ans = 0;
        int ansy = 0;
        for (int y=1; y<x; y++) {
            int GCD = gcd(x, y);
            if (GCD+y >= ans) {
                ans = GCD+y;
                ansy = y;
            }
        }
        cout << ansy << '\n';
    }
    return 0;
}