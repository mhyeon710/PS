#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int now[101], cnt[101], last[101];
int main() {
    fio();
    int K, N, M;
    cin >> K >> N >> M;

    for (int i=1; i<=M; i++) {
        int x, y;
        cin >> x >> y;

        if (y == 1) {
            if (now[x] == 0 || now[x] == K) {
                now[x] = 1;
                cnt[x]++;
                last[x] = i;
            }
        } else {
            if (now[x] == y-1) {
                now[x] = y;
                cnt[x]++;
                last[x] = i;
            }
        }
    }

    vector <pair<pii, int>> v;
    for (int i=1; i<=N; i++) {
        v.push_back({{cnt[i], -last[i]}, i});
    }

    sort(v.rbegin(), v.rend());

    for (auto c: v) {
        cout << c.second << ' ';
    }
    return 0;
}