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
        int N; cin >> N;
 
        int x; cin >> x;
        cout << 501 << ' ' << x+501 << ' ';
 
        int bf = x+501;
        for (int i=1; i<N-1; i++) {
            cin >> x;
            bf += x;
            cout << bf << ' ';
        }
        cout << '\n';
    }
    return 0;
}