#include <iostream>
#include <algorithm>
#include <queue>
#include <string>
#include <vector>
#define fio() cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
using namespace std;
 
int main() {
    int T; cin >> T;
    while (T--) {
        int N; cin >> N;
        
        vector <int> v(N);
        for (int i=0; i<N; i++) cin >> v[i];
 
        bool check = true;
        for (int i=1; i<N-1; i++) {
            int s = v[i-1];
            v[i-1] -= s;
            v[i] -= 2*s;
            v[i+1] -= s;
            if (v[i-1] < 0 || v[i] < 0 || v[i+1] < 0) {
                check = false;
                break;
            }
        }
 
        if (v[N-2] > 0 || v[N-1] > 0) check = false;
 
        if (check) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}