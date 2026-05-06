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
        int N;
        cin >> N;
 
        for (int i=0; i<2*N; i++) {
            for (int j=0; j<2*N; j++) {
                if (i%4 == 0 || i%4 == 1) {
                    if (j%4 == 0 || j%4 == 1) cout << '#';
                    if (j%4 == 2 || j%4 == 3) cout << '.';
                }
                if (i%4 == 2 || i%4 == 3) {
                    if (j%4 == 0 || j%4 == 1) cout << '.';
                    if (j%4 == 2 || j%4 == 3) cout << '#';
                }
            }
            cout << '\n';
        }
    }
    
 
    return 0;
}