#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();

    int now = 0;
    while (1) {
        int N; cin >> N;
        if (!N) break;

        now++;
        cout << "Case #" << now << ":";

        int ans = 0;
        for (int i=1; i<=N; i++) {
            for (int j=1; j<=i; j++) {
                int x; cin >> x;
                if (j == 1 || j == i || i == N) {
                    ans+=x;
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}