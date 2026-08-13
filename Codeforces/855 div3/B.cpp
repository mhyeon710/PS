#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;
 
int main() {
    fio();
    int T; cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;
 
        string s; cin >> s;
        map<char, int> m;
        for (int i=0; i<s.size(); i++) {
            m[s[i]]++;
        }
 
        int ans = 0;
        int diff = 0;
        bool odd = false;
        int cnt = 0;
 
        for (char i='a'; i<='z'; i++) {
            ans += min(m[i], m[i-32]);
            diff = max(m[i], m[i-32]) - min(m[i], m[i-32]);
            if (diff % 2) odd = true;
            cnt += diff / 2;
        }
 
        ans += min(K, cnt);
 
        // if (!odd && K > cnt && (K-cnt) % 2) ans--;
        
        cout << ans << '\n';
    }
    return 0;
}