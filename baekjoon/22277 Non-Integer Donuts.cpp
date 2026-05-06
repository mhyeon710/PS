#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int N; cin >> N;

    string s;
    cin >> s;
    
    int ans = 0;
    int now = stoi(s.substr(s.size()-2, 2));
    for (int i=0; i<N; i++) {
        cin >> s;
        now += stoi(s.substr(s.size()-2, 2));
        if (now % 100 != 0) ans++;
    }

    cout << ans;
    return 0;
}