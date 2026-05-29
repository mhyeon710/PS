#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <string>
#include <cstring>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int dp[1002][1002];
int main() {
    fio();
    int T; cin >> T;
    for (int t=1; t<=T; t++) {
        string a,b;
        cin >> a >> b;

        a = "0" + a;
        b = "0" + b;

        memset(dp, 0, sizeof(dp));

        for (int i=1; i<a.size(); i++) {
            for (int j=1; j<b.size(); j++) {
                if (a[i] == b[j]) dp[i][j] = dp[i-1][j-1] + 1;
                else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }

        cout << "#" << t << " " << dp[a.size()-1][b.size()-1] << '\n';
    }
    return 0;
}