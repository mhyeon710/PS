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
        vector <int> v(2);
        cin >> v[0] >> v[1];
        if (v[0] > v[1]) cout << v[1] << ' ' << v[0] << '\n';
        else cout << v[0] << ' ' << v[1] << '\n';         
    }
    return 0;
}