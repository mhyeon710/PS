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
        int N; cin >> N;
        
        vector <int> v;
        for (int i=0; i<N; i++) {
            int x; cin >> x;
            v.push_back(x);
        }
 
        bool check = false;
        for (int i=0; i<N-1; i++) {
            int mini = min(v[i], v[i+1]);
            v[i] -= mini;
            v[i+1] -= mini;
            if (v[i] > v[i+1]) {
                check = true;
                break;
            }
        }
 
        if (check) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}