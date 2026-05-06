#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int cnt[26];
int main() {
    fio();
    int N; cin >> N;
    string s; cin >> s;

    vector <vector<int>> a(26);
    for (int i=0; i<N; i++) {
        cnt[s[i] - 'a']++;
        a[s[i] - 'a'].push_back(i+1);
    }

    priority_queue<pii> pq;
    for (int i=0; i<26; i++) {
        if (cnt[i] > N/2) {
            cout << -1;
            return 0;
        }
        if (cnt[i]) pq.push({cnt[i], i});
    }

    cout << N/2 + N%2 << '\n';

    if (N%2) {
        auto [i1, c1] = pq.top(); pq.pop();
        auto [i2, c2] = pq.top(); pq.pop();
        auto [i3, c3] = pq.top(); pq.pop();
        
        int idx1 = a[c1][a[c1].size()-1]; a[c1].pop_back();
        int idx2 = a[c2][a[c2].size()-1]; a[c2].pop_back();
        int idx3 = a[c3][a[c3].size()-1]; a[c3].pop_back();
        
        vector <int> v;
        v.push_back(idx1); v.push_back(idx2); v.push_back(idx3);

        sort(v.begin(), v.end());
        cout << v[0] << ' ' << v[1] << '\n';
        cout << v[0] << ' ' << v[2] << '\n';

        if (i1-1 != 0) pq.push({i1-1, c1});
        if (i2-1 != 0) pq.push({i2-1, c2});
        if (i3-1 != 0) pq.push({i3-1, c3});
    }

    while (!pq.empty()) {
        auto [i1, c1] = pq.top(); pq.pop();
        auto [i2, c2] = pq.top(); pq.pop();
        
        int idx1 = a[c1][a[c1].size()-1]; a[c1].pop_back();
        int idx2 = a[c2][a[c2].size()-1]; a[c2].pop_back();
        
        if (idx1 > idx2) swap(idx1, idx2);
        cout << idx1 << ' ' << idx2 << '\n';

        if (i1-1 != 0) pq.push({i1-1, c1});
        if (i2-1 != 0) pq.push({i2-1, c2});
    }
    
    return 0;
}