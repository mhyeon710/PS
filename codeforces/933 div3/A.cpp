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
        int N, M, K;
        cin >> N >> M >> K;
        
        vector <int> v(N);
        vector <int> s(M);
 
        for (int i=0; i<N; i++) cin >> v[i];
        for (int i=0; i<M; i++) cin >> s[i];
        
        int ans = 0;
        for (int i=0; i<N; i++) {
            for (int j=0; j<M; j++) {
                if (v[i] + s[j] <= K)
                    ans++;
            }
        }
 
        cout << ans << '\n';
    }
    return 0;
}