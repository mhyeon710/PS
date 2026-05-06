#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int N; cin >> N;

    vector <pii> v1(N), v2(N);
    for (int i=0; i<N; i++) cin >> v1[i].first >> v1[i].second;
    for (int i=0; i<N; i++) cin >> v2[i].first >> v2[i].second;

    int ans = 0;
    for (int i=0; i<N; i++) {
        if ((v1[i].first < v2[i].first && v1[i].first < v2[i].second && v1[i].second < v2[i].first && v1[i].second < v2[i].second) ||
            (v2[i].first < v1[i].first && v2[i].first < v1[i].second && v2[i].second < v1[i].first && v2[i].second < v1[i].second)) {
            ans = -1;
            break;
        } else if (v1[i].second == v2[i].first || v1[i].first == v2[i].second) {
            continue;
        } else ans++;
    }

    cout << ans;
    return 0;
}