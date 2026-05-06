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
        int N, M; cin >> N >> M;
        
        string a, b;
        cin >> a >> b;
 
        int ans = 0;
        int nextbindex = 0;
        int nowbindex = 0;
        for (int i=0; i<a.size(); i++) {
            for (int j=nowbindex; j<b.size(); j++) {
                nextbindex = j+1;
                if (a[i] == b[j]) {
                    ans++;
                    break;
                }
            }
            nowbindex = nextbindex;
            if (nowbindex == b.size()) break;
        }
        cout << ans << '\n';
    }
    return 0;
}