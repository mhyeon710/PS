#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    string s; cin >> s;

    int ans = s.size();
    for (int i=0; i<s.size(); i++) {
        if (s[i] == ':') ans++;
        if (s[i] == '_') ans+=5;
    }
    
    cout << ans;
    return 0;
}