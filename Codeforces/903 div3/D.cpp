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
 
bool check[1000000];
set <int> s;
int main() {
    fio();
    
    for (int i=2; i*i<=1000000; i++) {
        if (!check[i]) {
            for (int j=i*i; j<=1000000; j+=i) {
                check[j] = 1;
            }
        }
    }
 
    for (int i=2; i<1000000; i++) {
        if (!check[i]) s.emplace(i);
    }
 
    int T; cin >> T;
    while (T--) {
        int N; cin >> N;
 
        map <int, int> m, input;
        for (int i=0; i<N; i++) {
            int x; cin >> x;
            input[x]++;
        }
 
        for (auto x:input) {
            int xx = x.first;
            for (int p:s) {
                if (xx < p*p) break;
                while (xx % p == 0) {
                    m[p] += x.second;
                    xx /= p;
                }
            }
            if (xx > 1) m[xx] += x.second;
        }
 
        bool check = 1;
        for (auto x:m) {
            if (x.second % N) {
                check = 0;
                break;
            }
        }
 
        if (check) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}