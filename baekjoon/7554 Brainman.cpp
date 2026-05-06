#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int T; cin >> T;
    for (int t=1; t<=T; t++) {
        int N; cin >> N;

        vector <int> v(N);
        for (int i=0; i<N; i++) cin >> v[i];

        int cnt = 0;
        for (int i=N-1; i>0; i--) {
            for (int j=0; j<i; j++) {
                if (v[j] > v[j+1]) {
                    swap(v[j], v[j+1]);
                    cnt++;
                }
            }
        }

        cout << "Scenario #" << t << ":\n" << cnt << "\n\n";
    }
    return 0;
}