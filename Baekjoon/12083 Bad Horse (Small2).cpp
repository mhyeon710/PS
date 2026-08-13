#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

bool can;
int team[101];
vector <vector<int>> v(101);
void dfs(int idx, int num) {

    for (auto x:v[idx]) {
        if (team[x] == 0) {
            if (num == 1) {
                team[x] = 2;
                dfs(x, 2);
            }
            else {
                team[x] = 1;
                dfs(x, 1);
            }
        } else {
            if (team[x] == num) {
                can = false;
                return;
            }
        }
    }
}

int main() {
    fio();
    int T, N, cnt;
    cin >> T;
    
    for (int t=1; t<=T; t++) {
        cin >> N;
        cnt = 0;
        
        map <string, int> m;
        for (int i=1; i<=100; i++) {
            v[i].clear();
        }

        for (int i=0; i<N; i++) {
            string a, b;
            cin >> a >> b;

            if (m.find(a) == m.end()) m[a] = ++cnt;
            if (m.find(b) == m.end()) m[b] = ++cnt;

            v[m[a]].push_back(m[b]);
            v[m[b]].push_back(m[a]);
        }

        can = true;
        memset(team, 0, sizeof(team));

        for (int i=1; i<v.size(); i++) {
            if (!can) break;
            if (team[i] > 0) continue;

            team[i] = 1;
            dfs(i, 1);
        }

        cout << "Case #" << t << ": ";
        if (can) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}