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
        vector <int> v(3);
        cin >> v[0] >> v[1] >> v[2];
        sort(v.begin(), v.end());
        
        int a, b, c;
        a = v[0], b = v[1], c = v[2];
 
        if (b%a) { cout << "NO\n"; continue; }
        if (c%a) { cout << "NO\n"; continue; }
 
        int divi = 0;
        divi += (b/a - 1);
        divi += (c/a - 1);
        if (divi > 3) { cout << "NO\n"; continue; }
        else cout << "YES\n";
    }
    return 0;
}