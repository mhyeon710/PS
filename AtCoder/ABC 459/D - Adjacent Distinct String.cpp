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
    int T; cin >> T;
    while (T--) {
        string s; cin >> s;
        
        vector <int> v(26, 0);
        for (auto c:s) {
            v[c-'a']++;
        }

        for (int i=0; i<26; i++) {
            if (v[i] == 0) continue;
            // cout << (char)('a'+i) << ": " << v[i] << endl;
        }

        bool can = true;
        string ans = "";

        int pre = -1;
        for (int i=0; i<s.size(); i++) {
            int maxi = 0;
            int idx;
            for (int j=0; j<26; j++) {
                if (j == pre) continue;
                if (v[j] > maxi) {
                    maxi = v[j];
                    idx = j;
                }
                maxi = max(maxi, v[j]);

            }
            // cout << idx << ' ' << (char)(idx + 'a') << '\n';
            v[idx]--;
            pre = idx;
            ans += (char)(idx + 'a');

            if (maxi == 0) {
                can = false;
                break;
            }
        }

        if (can) cout << "Yes" << '\n' << ans << '\n';
        else cout << "No\n";
    }
    return 0;
}