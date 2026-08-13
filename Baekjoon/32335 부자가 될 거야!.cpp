#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int N, M;
    cin >> N >> M;

    string s; cin >> s;
    for (int i=0; i<N; i++) {
        if (s[i] == '0') continue;
        
        int l = 10 - (s[i] - '0');
        if (l <= M) {
            s[i] = '0';
            M -= l;
        }
    }

    if (M) {
        s[N-1] = (((s[N-1] - '0') + M) % 10) + '0';
    }

    cout << s;
    return 0;
}