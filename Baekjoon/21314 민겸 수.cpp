#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    string s; cin >> s;

    int mcnt = 0;
    for (auto c:s) {
        if (c == 'K') {
            if (mcnt) {
                cout << 5;
                for (int i=0; i<mcnt; i++) cout << 0;
                mcnt = 0;
            } else {
                cout << 5;
            }
        } else mcnt++;
    }

    if (mcnt) {
        for (int i=0; i<mcnt; i++) cout << 1;
    }

    cout << '\n';
    mcnt = 0;

    for (auto c:s) {
        if (c == 'K') {
            if (mcnt) {
                cout << 1;
                for (int i=1; i<mcnt; i++) cout << 0;
                mcnt = 0;
            }
            cout << 5;
        } else mcnt++;
    }
    
    if (mcnt) {
        cout << 1;
        for (int i=1; i<mcnt; i++) cout << 0;
    }

    return 0;
}