#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int N; cin >> N;

    vector <int> v(N+1);
    for (int i=1; i<=N; i++) cin >> v[i];

    for (int i=1; i<=N; i++) {
        cout << 1;

        if (i <= 9) {
            cout << "00";
        } else if (i <= 99) {
            cout << "0";
        }
        
        cout << i;

        for (int t=0; t<v[i]; t++) cout << 0;
        
        cout << ' ';
    }
    
    return 0;
}