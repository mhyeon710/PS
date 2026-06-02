#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    string s; cin >> s;

    ll ans = 0;
    for (int i=0; i<s.size(); i++) {
        if (s[i] == 'C') {
            int mini = min((int)s.size() - i, i + 1);
            ans += (ll)mini;
        }
    }
    cout << ans;
    return 0;
}