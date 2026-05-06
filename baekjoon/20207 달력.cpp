#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

bool arr[1001][366];
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
int main() {
    fio();
    int N; cin >> N;

    vector <pii> v(N);
    for (int i=0; i<N; i++) {
        cin >> v[i].first >> v[i].second;
        v[i].second = -(v[i].second - v[i].first + 1);
    }
    
    sort(v.begin(), v.end());
    for (int i=0; i<N; i++) {
        v[i].second *= -1;
    }

    for (int i=0; i<N; i++) {
        auto [s, diff] = v[i];

        int h;
        for (int j=1; j<=1000; j++) {
            if (!arr[j][s]) {
                h = j;
                break;
            }
        }

        for (int j=s; j<s+diff; j++) {
            arr[h][j] = 1;
        }
    }

    
    int ans = 0, w = 0, mh = 0;
    for (int j=1; j<=365; j++) {
        int th = 0;
        for (int i=1; i<=1000; i++) {
            if (arr[i][j]) {
                th = i;
            }
        }

        if (th) {
            w++;
            mh = max(mh, th);
        } else {
            ans += w * mh;
            w = 0;
            mh = 0;
        }
    }

    ans += w * mh;
    cout << ans;
    return 0;
}