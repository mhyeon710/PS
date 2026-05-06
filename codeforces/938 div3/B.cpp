#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <vector>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;
 
int main() {
    fio();
    int T; cin >> T;
    while (T--) {
        int N, c, d;
        cin >> N >> c >> d;
 
        vector <int> v(N*N);
        for (int i=0; i<N*N; i++)
            cin >> v[i];
 
        sort(v.begin(), v.end());
 
        vector <int> ans;
        for (int i=0; i<N; i++) {
            for (int j=0; j<N; j++) {
                ans.push_back(v[0] + i*c + j*d);                
            }
        }
 
        sort(ans.begin(), ans.end());
 
        bool check = false;
        for (int i=0; i<N*N; i++) {
            if (v[i] != ans[i]) {
                check = true;
                break;
            }
        }
        if (check) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}