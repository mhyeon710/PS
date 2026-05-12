#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

vector <vector<int>> vs, ve;
int s[200001], e[200001];
map<pii, int> m;
vector <int> mini(200001, 200001);

int main() {
    fio();
    
    int N, M;
    cin >> N >> M;
    vs.resize(N+1);
    ve.resize(N+1);

    for (int i=0; i<M; i++) {
        int a, b;
        cin >> a >> b;
        m[{a, b}]++;
        vs[a].push_back(b);
        ve[b].push_back(a);
        mini[a] = min(mini[a], b);
    }

    for (int i=N-1; i>=1; i--) {
        mini[i] = min(mini[i], mini[i + 1]);
    }

    for (int i=1; i<=N; i++) {
        sort(vs[i].begin(), vs[i].end());
        sort(ve[i].begin(), ve[i].end());
    }

    int Q; cin >> Q;
    while (Q--) {
        int a, b;
        cin >> a >> b;

        if (m[{a, b}] >= 2) {
            cout << "Yes\n";
            continue;
        }

        if (m[{a, b}] == 1) {
            bool can = false;
            if (a + 1 <= b && mini[a + 1] <= b) can = true;
            if (a <= b - 1 && mini[a] <= b - 1) can = true;
            if (can) cout << "Yes\n";
            else cout << "No\n";
            continue;
        }

        if (vs[a].empty() || ve[b].empty()) {
            cout << "No\n";
            continue;
        }

        auto bit = upper_bound(vs[a].begin(), vs[a].end(), b);
        if (bit == vs[a].begin()) {
            cout << "No\n";
            continue;
        }
        --bit;
        int bmax = *bit;

        auto ait = lower_bound(ve[b].begin(), ve[b].end(), a);
        if (ait == ve[b].end()) {
            cout << "No\n";
            continue;
        }
        int amin = *ait;

        if (amin <= bmax+1) cout << "Yes\n";
        else cout << "No\n";
    }

    return 0;
}