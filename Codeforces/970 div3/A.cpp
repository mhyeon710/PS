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
        int a, b;
        cin >> a >> b;
 
        if (a%2 == 1) {
            cout << "NO\n";
        }
        else if (b%2 == 0) {
            cout << "YES\n";
        }
        else {
            if (a >= 2) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    return 0;
}