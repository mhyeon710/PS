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
        int N, M; cin >> N >> M;
        string a, b; cin >> a >> b;
 
        int ans = 0;
        while (1) {
            if (a.size() < b.size()) {
                a += a;
                ans++;
            }
            else {
                bool check = false;
                for (int i=0; i<=a.size()-b.size(); i++) {
                    string t = a.substr(i, M);
                    if (t == b) {
                        check = true;
                        cout << ans << '\n';
                        break;
                    }
                }
                if (check) break;
                a += a;
                if (a.size() > 100) {
                    cout << -1 << '\n';
                    break;
                }
                ans++;
            }
        }
    }
    return 0;
}