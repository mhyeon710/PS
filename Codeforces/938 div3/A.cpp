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
        int N, a, b;
        cin >> N >> a >> b;
        if (a*2 < b) {
            cout << N*a << '\n';
        }
        else {
            cout << (N/2)*b + (N%2)*a << '\n';
        }
    }
    return 0;
}