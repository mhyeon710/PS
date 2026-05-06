#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;
 
int main() {
    fio();
    int T; cin >> T;
    while (T--) {
        int N, x;
        cin >> N;
 
        map <int, int> ma, mb;
        for (int i=0; i<N; i++) {
            cin >> x;
            ma[x]++;   
        }
 
        for (int i=0; i<N; i++) {
            cin >> x;
            mb[x]++;
        }
 
        if (ma.size() + mb.size() > 3) cout << "YES\n";
        else cout << "NO\n";
        
    }
    return 0;
}
