#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int T; cin >> T;
    for (int t=1; t<=T; t++) {
        int N; cin >> N;

        int now = 0;
        map<string, int> l;
        map<int, vector<int>> m;
        vector <string> v;
        for (int i=0; i<N; i++) {
            string s, a, b; cin >> s;
            for (int c=0; c<s.size(); c++) {
                if (s[c] == ':') {
                    a = s.substr(0, c);
                    b = s.substr(c+1, s.size()-c-1);
                    break;
                }
            }
            if (l.find(b) == l.end()) { l[b] = now++; v.push_back(b); }
            if (l.find(a) == l.end()) { l[a] = now++; v.push_back(a); } 
            m[l[a]].push_back(l[b]);
        }

        int Q; cin >> Q;
        int lsize = l.size();
        queue <int> q;
        vector <string> ans;
        vector <bool> init(lsize, 0);
        for (int i=0; i<Q; i++) {
            string s; cin >> s;
            if (l.find(s) == l.end()) { ans.push_back(s); continue; }
            q.push(l[s]);
            init[l[s]] = 1;
        }

        // for (auto x:l) cout << x.first << ' ' << x.second << '\n';
        // for (auto x:m) {
        //     cout << x.first << ": ";
        //     for (auto s:x.second) {
        //         cout << s << ' ';
        //     }
        //     cout << "!\n";
        // }
        // for (int i=0; i<v.size(); i++) cout << i << ' ' << v[i] << '\n'; cout << endl;  

        vector <int> in(lsize);
        vector <vector<int>> out(lsize);
        while (!q.empty()) {
            int f = q.front(); q.pop();
            if (!out[f].empty()) continue;

            for (auto x: m[f]) {
                out[f].push_back(x);
                in[x]++;
                q.push(x);
            }
        }

        // for (int i=0; i<lsize; i++) {
        //     cout << i << ": " << in[i] << '\n';
        //     for (auto x: out[i]) cout << x << ' '; cout << endl;
        // }

        q = queue <int> ();
        for (int i=0; i<lsize; i++) {
            if (!in[i] && (init[i] || !out[i].empty())) q.push(i);
        }

        while (!q.empty()) {
            int f = q.front(); q.pop();
            ans.push_back(v[f]);
            for (auto x: out[f]) {
                in[x]--;
                if (!in[x]) q.push(x);
            }
        }


        cout << "Case #" << t << ": " << ans.size() << '\n';
        for (int i=ans.size()-1; i>=0; i--) {
            cout << ans[i] << '\n';
        }        
    }
    return 0;
}