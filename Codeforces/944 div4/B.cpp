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
        string s; cin >> s;
        int ssize = s.size();
        s += s[0];
 
        bool check = true;
        for (int i=0; i<ssize; i++) {
            if (s[i] != s[i+1]) {
                check = false;
                break;
            }
        }
 
        if (check) cout << "NO\n";
        else {
            cout << "YES\n";
            for (int i=1; i<=ssize; i++) {
                cout << s[i];
            }
            cout << '\n';
        }
    }
    return 0;
}