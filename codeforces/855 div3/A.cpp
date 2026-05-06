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
        string s; cin >> s;
 
        
 
        int cnt = 0;
        if (!(s[cnt] == 'm' || s[cnt] == 'M')) { cout << "NO\n"; continue; }
        for (int i=0; i<N; i++) {
            if (s[i] == 'm' || s[i] == 'M') {
                cnt++;
            } else break;
        }
 
        if (!(s[cnt] == 'e' || s[cnt] == 'E')) { cout << "NO\n"; continue; }
        for (int i=cnt; i<N; i++) {
            if (s[i] == 'e' || s[i] == 'E') {
                cnt++;
            }
            else break;
        }
        if (!(s[cnt] == 'o' || s[cnt] == 'O')) { cout << "NO\n"; continue; }
        
        for (int i=cnt; i<N; i++) {
            if (s[i] == 'o' || s[i] == 'O') {
                cnt++;
            }
            else break;
        }
 
        if (!(s[cnt] == 'w' || s[cnt] == 'W')) { cout << "NO\n"; continue; }
        
        for (int i=cnt; i<N; i++) {
            if (s[i] == 'w' || s[i] == 'W') {
                cnt++;
            }
            else break;
        }
 
        if (cnt == N) cout << "YES\n";
        else cout << "NO\n";
    }
 
    return 0;
}