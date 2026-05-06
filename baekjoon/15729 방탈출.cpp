#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int N; cin >> N;

    vector <int> v(N, 0), ans(N);
    for (int i=0; i<N; i++) cin >> ans[i];

    int cnt = 0;
    for (int i=0; i<N; i++) {
        if (v[i] != ans[i]) {
            cnt++;
            for (int j=i; j<=i+2; j++) {
                if (j == N) break;
                v[j] == 1 ? v[j] = 0 : v[j] = 1;
            }
        }
    }
    cout << cnt;
    return 0;
}