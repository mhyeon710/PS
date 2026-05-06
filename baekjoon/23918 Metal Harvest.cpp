#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int T;
    cin >> T;

    for (int t=1; t<=T; t++) {
        int N, K;
        cin >> N >> K;

        vector <pii> v(N);
        for (int i=0; i<N; i++) {
            int s, e;
            cin >> s >> e;
            v[i] = {s, e};
        }

        sort(v.begin(), v.end());

        int cnt = 0, now = 0;
        for (auto [s, e]: v) {
            if (now >= e) continue;
            if (now < s) now = s;

            int tmp = (e-now)/K;
            cnt += tmp;
            now += tmp*K;

            if (now < e) {
                cnt++;
                now += K;
            }
        }

        cout << "Case #" << t << ": " << cnt<< '\n';
    }
    return 0;
}