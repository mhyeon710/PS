#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

bool compare(string x, string y) {
    if (x.size() != y.size()) return x.size() < y.size();
    else return x < y;
}

int main() {
    fio();
    int N; cin >> N;

    vector <string> v;
    for (int i=0; i<N; i++) {
        string s; cin >> s;

        string t = "";
        for (int i=0; i<s.size(); i++) {
            if ('0' <= s[i] && s[i] <= '9') {
                t += s[i];
            } else if (t != "") {
                v.push_back(t);
                t = "";
            }
        }
        if (t != "") v.push_back(t);
    }

    for (int i=0; i<v.size(); i++) {
        int idx;
        for (int j=0; j<v[i].size(); j++) {
            if (v[i][j] != '0' || j == v[i].size()-1) {
                idx = j;
                break;
            }
        }
        v[i] = v[i].substr(idx, v[i].size()-idx);
    }

    sort(v.begin(), v.end(), compare);
    for (auto s:v) cout << s << '\n';

    return 0;
}