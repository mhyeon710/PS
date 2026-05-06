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
        int N, K;
        cin >> N >> K;
 
        string a, b;
        cin >> a >> b;
        
        
        map<char, int> ma, mb;
        for (int i=0; i<N; i++) {
            ma[a[i]]++;
            mb[b[i]]++;
        }
 
        bool no = false;
        for (char i='a'; i<='z'; i++) {
            if (ma[i] != mb[i]) {
                no = true;
                break;
            }
        }
 
        for (int i=0; i<N; i++) {
            if (i-K < 0 && i+K >= N) {
                if (a[i] != b[i]) {
                    no = true;
                    break;
                }
            }
        }
 
        if (no) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}