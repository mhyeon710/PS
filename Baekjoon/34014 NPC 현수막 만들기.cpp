#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    ll N, L, R;
    cin >> N >> L >> R;

    string s; cin >> s;
    
    vector <int> v;
    v.push_back(-1);
    for (int i=0; i<N; i++) {
        if (s[i] == 'C' || s[i] == 'N') {
            v.push_back(i);
        }
    }
    v.push_back(N);
    
    ll i = 0, n = -1, c = -1, p, len;
    ll ans = 0;
    while (i < N) {
        if (s[i] == 'N') {
            n = i;
        } else if (s[i] == 'C') {
            c = i;
            len = c - n + 1;
            p = (n + c) / 2;

            if (n == -1 || len > R || len%2 == 0 || s[p] != 'P') {
                i++;
                continue;
            }

            ll left = n;
            for (int j = n-1; j >= max(0LL, n-R+1); j--) {
                if (s[j] == 'N' || s[j] == 'C') break;
                left = j;
            }

            ll right = c;
            for (int j = c+1; j <= min(N-1, c+R-1); j++) {
                if (s[j] == 'N' || s[j] == 'C') break;
                right = j;
            }

            cout << left << ' ' << n << ' ' << c << ' ' << right << endl;; cout << endl;
            ll mini = min(n-left, right-c) + 1;
            ll maxi = max(n-left, right-c) + 1;
            ll diff = maxi - mini;
            
            cout << mini << ' ' << maxi << endl;
            // 아래 부분
            ans += min(R - L + 1, diff) * mini + (mini * (mini + 1) / 2) - ((maxi - max((R-L+1), diff)) * (maxi - max((R-L+1), diff) + 1) / 2);

            cout << ans << '\n';
        }

        i++;
    }

    cout << ans;
    return 0;
}