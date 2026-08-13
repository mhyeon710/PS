#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

vector <bool> visited(200000);
map<pii, int> m;
int mini, before, nowx = 1, nowy;
int x[4] = {0, 1, 0, -1};
int y[4] = {1, 0, -1, 0};

int main() {
    fio();
    int N; cin >> N;

    cin >> before;
    m[{nowx, before}] = 0;

    for (int i=1; i<N; i++) {
        cin >> nowy;
        if (before >= nowy) nowx++;
        m[{nowx, nowy}] = i;
        before = nowy;
    }

    for (auto it:m) {
        int idx = it.second;
        if (visited[idx]) continue;

        mini++;

        queue <pii> q;
        q.push(it.first);
        visited[idx] = 1;
        while (!q.empty()) {
            auto [nx, ny] = q.front(); q.pop();

            for (int i=0; i<4; i++) {
                int X = nx + x[i];
                int Y = ny + y[i];
                pii newCord = {X, Y};
                if (m.find(newCord) == m.end()) continue;
                
                int newIdx = m[newCord];
                if (visited[newIdx]) continue;
                q.push(newCord);
                visited[newIdx] = 1;
            }
        }
    }

    cout << mini << '\n' << N;
    return 0;
}