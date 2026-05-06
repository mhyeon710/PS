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
#define INF     0x7fffffff
#define LLINF   0x7f7f7f7f7f7f
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;
 
int main() {
    fio();
    int T; cin >> T;
    while (T--) {
        int a, b, c;
        cin >> a >> b >> c;
 
        if (a < b && b < c) cout << "STAIR\n";
        else if (a < b && b > c) cout << "PEAK\n";
        else cout << "NONE\n";
    }
    return 0;
}