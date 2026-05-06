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
 
int arr[1001][1001];
int main() {
    fio();
    int T; cin >> T;
    while (T--) {
        int N; cin >> N;
        for (int i=1; i<=N; i++) {
            for (int j=1; j<=N; j++) {
                char c; cin >> c;
                arr[i][j] = c-'a';
            }
        }
 
        int ans = 0;
        int iter = N-1;
        for (int k=1; k<=N/2; k++) {
            for (int i=0; i<iter; i++) {
                int a = arr[k][k+i];
                int b = arr[k+i][N-k+1];
                int c = arr[N-k+1-i][k];
                int d = arr[N-k+1][N-k+1-i];
 
                int maxi;
                maxi = max(a, b);
                maxi = max(maxi, c);
                maxi = max(maxi, d);
                ans += (4*maxi - a - b - c - d);
            }
            iter -= 2;
        }
        cout << ans << '\n';
    }
    return 0;
}