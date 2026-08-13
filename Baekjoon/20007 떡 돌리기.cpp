#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

vector <pll> g[1001];
vector <ll> dist(1001, 1e17);
priority_queue<pll, vector<pll>, greater<pll>> pq;

int main() {
    fio();
    ll N, M, X, Y;
    cin >> N >> M >> X >> Y;

    for (int i=0; i<M; i++) {
        ll u, v, w;
        cin >> u >> v >> w;
        g[u].push_back({v, w});
        g[v].push_back({u, w});
    }

    dist[Y] = 0;
    pq.push({0, Y});

    while (!pq.empty()) {
        auto [curDist, curNode] = pq.top(); pq.pop();

        for (auto [nextNode, addDist]:g[curNode]) {
            ll newDist = addDist + curDist;

            if (newDist < dist[nextNode]) {
                dist[nextNode] = newDist;
                pq.push({newDist, nextNode});
            }
        }
    }

    vector <ll> walk;
    for (int i=0; i<N; i++) {
        if (dist[i] == 0) continue;
        if (dist[i] == 1e17) {
            cout << "-1\n";
            return 0;
        }
        walk.push_back(dist[i] * 2);
    }

    sort(walk.begin(), walk.end());
    // for (auto x:walk) cout << x << ' '; cout << endl;

    ll now = 0, day = 1;
    for (int i=0; i<walk.size(); i++) {
        if (walk[i] > X) {
            cout << -1;
            return 0;
        }

        if (now + walk[i] > X) {
            day++;
            now = walk[i];
        } else {
            now += walk[i];
        }
    }

    cout << day;
    return 0;
}