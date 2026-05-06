#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    string s; cin >> s;

    vector <pii> v;
    int n = 0, start = 0;
    for (int i=0; i<s.size(); i++) {
        if (s[i] == 'w') {
            if (i == 0 || s[i-1] != 'w') start = i;
            n++;
        } else {
            if (n) v.push_back({start, n});
            n = 0;
        }

        if (i == s.size()-1 && n) {
            v.push_back({start, n});
        }
    }

    int ssize = 0;
    bool right = 1;
    for (auto x:v) {
        auto [start, cnt] = x;
        
        string temp = "";
        for (int i=0; i<cnt; i++) temp += 'w';
        for (int i=0; i<cnt; i++) temp += 'o';
        for (int i=0; i<cnt; i++) temp += 'l';
        for (int i=0; i<cnt; i++) temp += 'f';

        if (s.size() - start < 4*cnt) {
            right = 0;
            break;
        }

        if (s.substr(start, 4*cnt) != temp) {
            right = 0;
            break;
        }

        ssize += 4*cnt;
    }

    if (ssize != s.size()) right = 0;

    cout << right;
    return 0;
}