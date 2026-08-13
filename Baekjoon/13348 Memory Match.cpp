#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;


map <string, int> m;
set <string> s;
string sa, sb;
int N, K, a, b, p, cnt;
int main() {
    fio();
    cin >> N >> K;

    vector <string> v(N+1, "");
    for (int i=0; i<K; i++) {
        cin >> a >> b >> sa >> sb;
        v[a] = sa;
        v[b] = sb;
        if (sa == sb) s.insert(sa);
    }

    for (int i=1; i<=N; i++) {
        if (v[i] == "") continue;
        m[v[i]]++;
    }

    for (auto x:m) {
        if (x.second == 2) p++;
        cnt += x.second;
    }


    if (m.size() == N/2 || cnt == N-2) cout << N/2 - s.size();
    else cout << p - s.size();

    return 0;
}