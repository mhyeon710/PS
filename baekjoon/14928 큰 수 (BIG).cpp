#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    string s; cin >> s;

    int ans = 0;
    for (int i=0; i<s.size(); i++) {
        ans = (ans * 10 + (s[i] - '0')) % 20000303;
    }
    
    cout << ans;
    return 0;
}