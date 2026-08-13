#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();

    string header;
    if (!getline(cin, header)) return 0; // read and ignore the header line

    int N; 
    if (!(cin >> N)) return 0;

    vector<int> A(N + 1, 0);      // sum of weights over sets containing candidate c
    vector<int> B(N + 1, 0);      // statement type of each student
    vector<char> self_in(N + 1, 0); // whether i is in S_i
    int Z = 0; // count of B == 0 statements

    for (int i = 1; i <= N; ++i) {
        int M; cin >> M;
        vector<int> tmp; tmp.reserve(M);
        bool contain_self = false;
        for (int k = 0; k < M; ++k) {
            int s; cin >> s;
            tmp.push_back(s);
            if (s == i) contain_self = true;
        }
        int b; cin >> b;
        B[i] = b;
        if (b == 0) ++Z;
        int w = (b == 1 ? +1 : -1);
        for (int s : tmp) A[s] += w;
        self_in[i] = contain_self;
    }

    vector<int> ans;
    ans.reserve(N);
    for (int c = 1; c <= N; ++c) {
        int truth_all = Z + A[c];
        int self_true = (B[c] == 1 ? (self_in[c] ? 1 : 0) : (self_in[c] ? 0 : 1));
        if (self_true == 0 && truth_all == N - 1) ans.push_back(c);
    }

    if (ans.empty()) {
        cout << "swi\n";
    } else {
        for (size_t i = 0; i < ans.size(); ++i) {
            if (i) cout << ' ';
            cout << ans[i];
        }
        cout << '\n';
    }

    return 0;
}
