#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();

    int t = 1, N, M, x;
    while (1) {
        cin >> N;
        if (!N) break;

        cout << "Scenario #" << t << '\n';

        map<int, int> m;
        for (int i=0; i<N; i++) {
            cin >> M;
            for (int j=0; j<M; j++) {
                cin >> x;
                m[x] = i;
            }
        }

        queue <int> tq[N];
        set <int> ex;
        queue <int> order;

        while (1) {
            string s; cin >> s;
            if (s == "STOP") break;

            if (s == "ENQUEUE") {
                cin >> x;

                int team = m[x];
                tq[team].push(x);

                if (ex.find(team) == ex.end()) {
                    ex.insert(team);
                    order.push(team);
                }
            } else {
                int team = order.front();
                int f = tq[team].front(); tq[team].pop();
                cout << f << '\n';

                if (tq[team].empty()) {
                    order.pop();
                    ex.erase(team);
                }
            }
        }

        cout << '\n';
        t++;
    }
    return 0;
}