#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int T, N, a, b, P, c, bus[5002];
int main() {
    fio();
    cin >> T;
    for (int i=1; i<=T; i++) {
        cout << "Case #" << i << ": ";
        memset(bus, 0, sizeof(bus));
        
        cin >> N;
        for (int i=0; i<N; i++) {
            cin >> a >> b;
            bus[a]++;
            bus[b+1]--;
        }

        int now = bus[0];
        for (int i=1; i<=5000; i++) {
            now += bus[i];
            bus[i] = now;
        }
        
        cin >> P;
        for (int i=0; i<P; i++) {
            cin >> c;
            cout << bus[c] << ' ';
        }
        cout << '\n';
    }
    return 0;
}