#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <queue>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int N, M;
    cin >> N >> M;

    vector<pii> g[N+1];
    for (int i=0; i<M; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        g[u].push_back({v, w});
    }

    vector <ll> dist(N+1, 1e16);

    priority_queue <pll, vector<pll>, greater<pll>> pq;
    
    pq.push({0, 1});
    dist[1] = 0;

    while (!pq.empty()) {
        auto [now_node, now_dist] = pq.top();
        pq.pop();

        if (now_dist > dist[now_node]) continue;

        for (auto [next_node, weight] : g[now_node]) {
            if (now_dist + weight < dist[next_node]) {
                dist[next_node] = now_dist + weight;
                pq.push({dist[next_node], next_node});
            }
        }
    }

    cout << dist[N];
    return 0;
}