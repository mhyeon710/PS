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
 
int main() {
    fio();
    int T; cin >> T;
    while (T--) {
        ll l, r;
        cin >> l >> r;
 
        ll cnt = 1;
        ll plus = 1;
        ll sum = 0;
        while (1) {
            sum += plus;
            if (sum > r - l) {
                cout << cnt << '\n';
                break;
            }
            plus++;
            cnt++;
        }
    }
    return 0;
}