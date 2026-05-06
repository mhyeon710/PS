#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define pss     pair<string, string>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int X, Y, G;
    string a, b, c;
    vector <pss> vx, vy;

    cin >> X;
    for (int i=0; i<X; i++) {
        cin >> a >> b;
        vx.push_back({a, b});
    }
    
    cin >> Y;
    for (int i=0; i<Y; i++) {
        cin >> a >> b;
        vy.push_back({a, b});
    }

    cin >> G;
    unordered_map <string, int> m;
    for (int i=0; i<G; i++) {
        cin >> a >> b >> c;
        m[a] = i;
        m[b] = i;
        m[c] = i;
    }

    int cnt = 0;
    for (auto &p: vx) {
        if (m[p.first] != m[p.second]) cnt++;
    }

    for (auto &p: vy) {
        if (m[p.first] == m[p.second]) cnt++;
    }

    cout << cnt;
    return 0;
}