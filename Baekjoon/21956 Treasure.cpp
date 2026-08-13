#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int N, K;
    cin >> N >> K;

    string s;
    cin >> s;
    
    vector <pair<char, int>> v;

    int i = 0;
    while (i < N) {
        if (v.empty()) {
            v.push_back({s[i], 1});
            i++;
            continue;
        }

        auto [l, cnt] = v.back();

        if (s[i] == l) {
            v.back().second++;
        } else {
            v.push_back({s[i], 1});
        }

        if (v.back().second == K) {
            v.pop_back();
        }

        i++;
    }
    
    for (int i=0; i<v.size(); i++) {
        for (int j=0; j<v[i].second; j++) {
            cout << v[i].first;
        }
    }
    return 0;
}