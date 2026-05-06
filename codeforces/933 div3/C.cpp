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
        string s; cin >> s;
 
        int ans = 0;
        if (N > 2) {
            for (int i=0; i<N-2; i++) {
                string temp = "";
                temp += s[i];
                temp += s[i+1];
                temp += s[i+2];
                if (temp == "map") ans++;
                else if (temp == "pie") ans++;
            }
            for (int i=0; i<N-4; i++) {
                string temp = "";
                temp += s[i];
                temp += s[i+1];
                temp += s[i+2];
                temp += s[i+3];
                temp += s[i+4];
                if (temp == "mapie") ans--;
            }
        }
        
        cout << ans << '\n';
    }
    return 0;
}