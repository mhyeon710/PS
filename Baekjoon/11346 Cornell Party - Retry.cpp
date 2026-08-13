#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();

    int T; cin >> T;
    while (T--) {
        unordered_set <string> s;

        int N, M;
        cin >> N >> M;

        for (int i=0; i<N; i++) {
            string ss; cin >> ss;
            s.insert(ss);
        }

        for (int i=0; i<M; i++) {
            string ss; cin >> ss;
            s.insert(ss);
        }

        cout << s.size() << '\n';
    }

    return 0;
}