#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int T; cin >> T;

    for (int t=1; t<=T; t++) {
        int N; cin >> N;

        int arr[50][50];
        for (int i=0; i<N; i++) {
            for (int j=0; j<N; j++) {
                char c; cin >> c;
                arr[i][j] = c-'0';
            }
        }
        
        int ans = 0;
        for (int i=0; i<N; i++) {
            int si;
            if (i < N/2) si = N/2-i;
            else si= i-N/2;
            for (int j=si; j<N-si; j++) {
                ans += arr[i][j];

                // cout << i << ' ' << j << '\n';
            }
            // cout << '\n';
        }
        
        cout << "#" << t << ' ' << ans << '\n'; 
    }
    return 0;
}