#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int T = 3;
int main() {
    fio();
    int N;
    cin >> N;

    vector <int> v(N+1, 0);
    while (T--) {

        int now = 0, cnt = 0;;
        for (int i=1; i<=N; i++) {
            if (v[i] == -1) continue;
            v[i] = now;
            cnt += now;
            now = (now+1)%6;
        }

        cout << "? ";
        for (int i=1; i<=N; i++) {
            cout << max(0, v[i]) << ' ';
        }
        cout << endl;
        
        int suma;
        cin >> suma;

        int diff = suma - cnt*9;
        for (int i=1; i<=N; i++) {
            if (v[i] != diff) v[i] = -1;
        }
    }

    for (int i=1; i<=N; i++) {
        if (v[i] != -1) cout << "! " << i << endl;
    }
    return 0;
}