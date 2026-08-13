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
 
        int zo = 0;
        int oz = 0;
        for (int i=0; i<s.size()-1; i++) {
            if (s[i] == '0' && s[i+1] == '1') zo++;
            if (s[i] == '1' && s[i+1] == '0') oz++;
        }
        zo>0 ? zo-- : zo;
        cout << 1+zo+oz << '\n';
 
    }
    return 0;
}