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
        int N; string s,t;
        
        cin >> N >> s;
        t = s;
        
        sort(t.begin(), t.end());
        t.erase(std::unique(t.begin(), t.end()), t.end());
 
        int ssize = s.size();
        int tsize = t.size();
        for (int i=0; i<ssize; i++) {
            int x = lower_bound(t.begin(), t.end(), s[i]) - t.begin();
            cout << t[tsize-1-x];
        }
        cout << '\n';
    }
    return 0;
}