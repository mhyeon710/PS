#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int N, T, sumL = 0, sumR = 0, maxi = 0;
    cin >> N >> T;
    
    vector <pii> v(N);
    for (int i=0; i<N; i++) {
        cin >> v[i].first >> v[i].second;
        sumL += v[i].first;
        sumR += v[i].second;
        maxi = max(maxi, v[i].first);
    }

    if (sumL > T || sumR < T) {
        cout << -1;
        return 0;
    }

    int l = maxi, r = 1e9, m, ans;
    while (l <= r) {
        m = (l+r)/2;
        
        bool can = true;
        int rem = T - sumL;
        int temp = 0;
        for (int i=0; i<N; i++) {
            temp += min(v[i].second, m) - v[i].first;
        }
        if (temp >= rem) {
            ans = m;
            r = m-1;
        }  else {
            l = m+1;
        }
    }

    cout << ans;
    return 0;
}