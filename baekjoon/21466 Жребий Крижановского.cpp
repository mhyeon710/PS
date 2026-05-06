#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int N; cin >> N;

    vector <int> v(N), s(N);
    for (int i=0; i<N; i++) cin >> v[i];
    for (int i=0; i<N-1; i++) cin >> s[i];

    int maxi = 0;
    int ans = 1;
    for (int i=1; i<=105; i++) {
        s[N-1] = i;

        vector <int> cnt(110, 0);
        for (int j=0; j<N; j++) {
            cnt[s[j]]++;
        }

        int score = 0;
        for (int j=1; j<=110; j++) {
            if (cnt[j] == 1) {
                score = j;
                break;
            }
        }

        int idx = 0;
        for (int j=0; j<N; j++) {
            if (score == s[j]) {
                idx = j;
                break;
            }
        }

        v[idx] += score;

        int lower = 0;
        for (int j=0; j<N-1; j++) {
            if (v[j] < v[N-1]) lower++;
        }

        if (maxi < lower) {
            maxi = lower;
            ans = i;
        }

        v[idx] -= score;
    }

    cout << ans;
    return 0;
}