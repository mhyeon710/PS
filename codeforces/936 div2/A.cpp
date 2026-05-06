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
#define INF     0x7fffffff
#define LLINF   0x7f7f7f7f7f7f
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;
 
int main() {
    fio();
    int T; cin >> T;
    while (T--) {
        int N; cin >> N;
        
        vector <int> v(N);
        for (int i=0; i<N; i++)
            cin >> v[i];
 
        sort(v.begin(), v.end());
 
        int ans = 0;
        int index = N/2;
        if (N%2 == 0) index--;
        
        v[index]++;
        ans++;
        for (int i=index; i<N-1; i++) {
            if (v[i] > v[i+1]) {
                v[i+1]++;
                ans++;
            }
            else break;
        }
        cout << ans << '\n';
    }
    return 0;
}