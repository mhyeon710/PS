#include <iostream>
#include <vector>
#include <algorithm>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int card[300001], bef[300001], nxt[300001], cnt;

void dfs(int i) {
    if (nxt[i] != 0) {
        cnt++;
        dfs(nxt[i]);
    }
}

int main() {
    fio();
    int N, Q;
    cin >> N >> Q;

    for (int i=1; i<=N; i++) card[i] = i;

    for (int i=0; i<Q; i++) {
        int c, p;
        cin >> c >> p;

        if (card[c] == c) card[c] = 0;

        nxt[bef[c]] = 0;
        nxt[p] = c;
        bef[c] = p;
    }

    for (int i=1; i<=N; i++) {
        if (card[i] == 0) {
            cout << "0 ";
            continue;
        }

        cnt = 1;
        dfs(i);
        cout << cnt << ' ';
    }
    return 0;
}