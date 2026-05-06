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
        int N, W, E;
        cin >> N >> W >> E;

        int ans = 0;
        for (int i=0; i<N; i++) {
            int lww, lwe, lew, lee;
            cin >> lww >> lwe >> lew >> lee;

            ans += max(W * lww + E * lew, W * lwe + E * lee);
        }

        cout << "Data Set " << t << ":\n" << ans << "\n\n";
    }

    return 0;
}