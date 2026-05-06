#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int N, K, R, C;
    cin >> N >> K >> R >> C;

    vector <pii> v;
    for (int i=R-1; i<=R+1; i++) {
        for (int j=C-1; j<=C+1; j++) {
            if (i<1 || i>N || j<1 || j>N) continue;
            v.push_back({i, j});
        }
    }

    vector <bool> check(v.size(), 0);
    for (int i=0; i<K; i++) {
        int x, y;
        cin >> x >> y;
        for (int j=0; j<check.size(); j++) {
            auto [r, c] = v[j];
            if (r == x || c == y || abs(r-x) == abs(c-y)) check[j] = 1;
        }
    }

    bool CHECK = false;
    bool MATE = true;
    pii king = {R, C};
    for (int i=0; i<v.size(); i++) {
        if (v[i] == king && check[i]) CHECK = true;
    }
    
    for (int i=0; i<v.size(); i++) {
        if (v[i] != king && !check[i]) MATE = false;
    }

    if (CHECK && MATE) cout << "CHECKMATE";
    else if (CHECK && !MATE) cout << "CHECK";
    else if (!CHECK && MATE) cout << "STALEMATE";
    else cout << "NONE";
    return 0;
}