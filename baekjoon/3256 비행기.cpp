#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int N; cin >> N;

    vector <int> v(N);
    for (int i=0; i<N; i++) {
        cin >> v[i];
    }

    int t = 0, next = 0, cnt = 0;
    vector <bool> visited(1001, 0);

    // idx, nowrow, time
    queue <array<int, 3>> q;
    while (1) {
        t++;
        if (next < N && !visited[1]) {
            if (v[next] == 1) q.push({v[next], 1, 1});
            else q.push({v[next], 1, 0});
            visited[1] = 1;
            next++;
        }

        // cout << "now: " << t << endl;

        int qsize= q.size();
        for (int i=0; i<qsize; i++) {
            auto [wantrow, nowrow, time] = q.front(); q.pop();
            // cout << wantrow << ' ' << nowrow << ' ' << time << endl;
            if (wantrow == nowrow) {
                if (time == 5) {
                    visited[nowrow] = 0;
                    cnt++;
                } else {
                    q.push({wantrow, nowrow, time+1});
                }
            } else if (visited[nowrow+1]) {
                q.push({wantrow, nowrow, 0});
            } else if (!visited[nowrow+1]) {
                if (nowrow + 1 == wantrow) {
                    q.push({wantrow, nowrow+1, 1});
                } else {
                    q.push({wantrow, nowrow+1, 0});
                }
                visited[nowrow] = 0;
                visited[nowrow+1] = 1;
            }
        }

        // cout << endl;

        if (next == N && cnt == N) break;        
    }

    cout << t;
    return 0;
}