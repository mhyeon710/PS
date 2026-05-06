#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int N;
    string s;
    cin >> N >> s;

    int idx = -1;
    for (int i=0; i<s.size(); i++) {
        if (s[i] == 'o') idx=i;
        else break;
    }

    if (idx == -1) cout << s;
    else if (idx == s.size()-1) cout << "";
    else cout << s.substr(idx+1, s.size() - idx-1);
    return 0;
}