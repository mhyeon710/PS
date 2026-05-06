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
 
        vector <int> v(N);
        for (int i=0; i<N; i++) {
            cin >> v[i];
        }
 
        int left = 0;
        int right = 0;
        int ans = 0;
        
        for (int i=0; i<N; i++) {
            int cnt = 0;
            for (int j=i+1; j<N; j++) {
                if (v[i] > v[j]) cnt++;
                else if (v[i] < v[j]) cnt--;
                if (ans < cnt) {
                    ans = cnt;
                    left = i;
                    right = j;
                }
            }
        }
 
        cout << left+1 << ' ' << right+1 << '\n';
    }
    return 0;
}