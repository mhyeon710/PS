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
 
        bool arr[N][N];
        memset(arr, 0, sizeof(arr));
 
        for (int i=0; i<N; i++) {
            for (int j=0; j<N; j++) {
                char c; cin >> c;
                if (i <= j) {
                    if (c == '0') c = 0;
                    else c = 1;
                }
                else {
                    if (c == '0') c= 1;
                    else c=0;
                }
                arr[i][j] = c;
            }
        }
 
        vector <pii> v;
        for (int i=0; i<N; i++) {
            int cnt = 0;
            for (int j=0; j<N; j++) {
                if (arr[i][j]) cnt++;
            }
            v.push_back({-cnt, i+1});
        }
 
        sort(v.begin(), v.end());
 
        for (auto x:v) {
            cout << x.second << ' ';
        }
        cout << endl;
    }
    return 0;
}
