#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    string s, p;
    cin >> s >> p;

    int ssize = s.size();
    int psize = p.size();
    
    int pi = 0, cnt = 0;
    while (pi < psize) {

        int ncopy = 0;
        for (int si=0; si<ssize; si++) {
            if (s[si] == p[pi]) {
                int tpi = pi, tcnt = 0;
                for (int tsi=si; tsi<ssize; tsi++) {
                    if (s[tsi] == p[tpi]) {
                        tpi++;
                        tcnt++;
                    } else break;
                }
                ncopy = max(ncopy, tcnt);
            }
        }
        
        if (ncopy) {
            pi += ncopy;
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}