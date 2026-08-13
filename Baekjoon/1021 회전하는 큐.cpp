#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int N, M;
    cin >> N >> M;

    vector <bool> v(N+1, 1);

    int now = 1;
    int ans = 0;
    for (int i=0; i<M; i++) {
        int x; cin >> x;

        int temp = now;
        int left = 0;
        while (temp != x) {
            temp++;
            if (temp == N+1) temp = 1;
            if (v[temp]) left++; 
        }

        temp = now;
        int right = 0;
        while (temp != x) {
            temp--;
            if (temp == 0) temp = N;
            if (v[temp]) right++;
        }

        ans += min(left, right);

        if (i == N-1) break;

        v[x] = 0;
        now = x;
        while (1) {
            if (v[now]) break;
            now++;
            if (now == N+1) now = 1;
        }
    }

    cout << ans;
    return 0;
}