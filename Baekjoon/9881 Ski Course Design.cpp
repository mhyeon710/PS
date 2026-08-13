#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int N; cin >> N;

    vector <int> v(N);
    for (int i=0; i<N; i++) cin >> v[i];

    int ans = 1e8;
    for (int i=0; i<=100-17; i++) {
        int low = i;
        int high = i+17;

        int cost = 0;
        for (auto h:v) {
            if (low <= h && h <= high) continue;
            else if (h < low) cost += (h-low) * (h-low);
            else if (high < h) cost += (h-high) * (h-high);
        }
        ans = min(ans, cost);
    }

    cout << ans;
    return 0;
}