#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int N, K;
    cin >> N >> K;
    string s; cin >> s;
    
    char now = 'L';
    int idx = 0, ans = 0;
    for (int i=1; i<=K; i++) {
        while (1) {
            if (idx < N && s[idx] == now) {
                idx++;
                now == 'L' ? now = 'R' : now = 'L';
            } else {
                now == 'L' ? now = 'R' : now = 'L';
                break;
            }
        }
        if (idx == N) {
            ans = K - i + 1;
            break;
        }
    }

    cout << ans;
    return 0;
}