#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();

    int N; cin >> N;
    vector <pair<string, int>> algo(N);
    for (int i=0; i<N; i++) {
        cin >> algo[i].first >> algo[i].second;
    }

    int M; cin >> M;
    map<string, int> m;
    for (int i=0; i<M; i++) {
        string s; int x;
        cin >> s >> x;
        m[s] = x;
    }
    
    int Q; cin >> Q;
    int now = 0;
    while (Q--) {
        string s1, s2, s3;
        cin >> s1 >> s2 >> s3;

        if (s3 == "chan!") {
            now = m[s1];
            cout << "hai!\n";
        } else {
            vector <pair<int, string>> temp;

            for (int i=0; i<N; i++) {
                temp.push_back({abs(algo[i].second - now), algo[i].first});
            }

            sort(temp.begin(), temp.end());
            

            auto it = temp.begin();
            string ans1 = it->second;
            it++;
            string ans2 = it->second;

            cout << ans2 << " yori mo " << ans1 << '\n';
        }
    }

    return 0;
}