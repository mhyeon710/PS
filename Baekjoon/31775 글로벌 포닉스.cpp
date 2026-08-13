#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    if (('0' <= s1[0] && s1[0] <= '9') || ('0' <= s2[0] && s2[0] <= '9') || ('0' <= s3[0] && s3[0] <= '9')) {
        cout << "PONIX";
        return 0;
    }

    vector <bool> v(26, 0);
    v[s1[0] - 'a'] = 1;
    v[s2[0] - 'a'] = 1;
    v[s3[0] - 'a'] = 1;

    if (v['l' - 'a'] && v['k' - 'a'] && v['p' - 'a']) cout << "GLOBAL";
    else cout << "PONIX";   
    return 0;
}