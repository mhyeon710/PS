#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();

    int N; cin >> N;
    vector <bool> v(N+1, 1);

    int x, cnt = 1;
    for (int i=2; i<=N; i++) {
        cout << "? 1 " << i << endl; 
        cin >> x;
        if (cnt >= x) {
            v[i] = 0;
        }
        cnt = x;
    }

    int ans;
    cout << "? 1 " << N << endl;
    cin >> ans;

    cnt = 1;
    for (int i=N-1; i>=1; i--) {
        cout << "? " << i << " " << N << endl; 
        cin >> x;
        if (cnt >= x) {
            v[i] = 0;
        }
        cnt = x;
    }

    cout << "! " << ans << " ";
    for (int i=1; i<=N; i++) {
        if (v[i]) cout << i << ' ';
    }
    cout << endl;

    return 0;
}