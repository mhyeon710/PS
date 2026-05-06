#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int N; cin >> N;

    for (int i=1; i<=N; i++) {
        string s; cin >> s;
        
        int ans = 0, off = 0;
        for (auto c:s) {
            if (off == 0 && c == 'w') {
                ans++;
                continue;
            }

            if (c == 'o') off++;
            else off--;
        }

        cout << "Data Set " << i << ":\n" << ans + off << "\n\n";
    }
    return 0;
}