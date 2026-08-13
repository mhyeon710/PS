#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

string s;
int N, w, b, l, fixcnt, rall, sall, pall, rfix, sfix, pfix;
int main() {
    fio();

    cin >> N;  

    for (int i=0; i<N; i++) s += "R";
    cout << "? " << s << endl;
    cin >> sall >> b >> l;

    for (int i=0; i<N; i++) s[i] = 'S';
    cout << "? " << s << endl;
    cin >> pall >> b >> l;

    rall = N - sall - pall;

    vector <bool> fix(N, 0);
    for (int i=0; i<N; i++) {
        if (i%3 == 0) s[i] == 'R';
        if (i%3 == 1) s[i] == 'S';
        if (i%3 == 2) s[i] == 'P';
    }

    for (int T=2; T<420; T++) {
        cout << "? " << s << endl;
        cin >> w >> b >> l;

        if (w == N) break;

        if (b != -1) {
            if (s[b-1] == 'R') { s[b-1] = 'P'; pfix++; }
            else if (s[b-1] == 'S') { s[b-1] = 'R'; rfix++; }
            else if (s[b-1] == 'P') { s[b-1] = 'S'; sfix++; }
            fix[b-1] = 1;
            fixcnt++;
        }

        if (l != -1) {
            if (s[l-1] == 'R') { s[l-1] = 'S'; sfix++; }
            else if (s[l-1] == 'S') { s[l-1] = 'P'; pfix++; }
            else if (s[l-1] == 'P') { s[l-1] = 'R'; rfix++; }
            fix[l-1] = 1;
            fixcnt++;
        }

        if (pfix + rfix + sfix == N) break;

        for (int i=0; i<N; i++) {
            if (fix[i]) continue;
            char before = 'A';

            int cnt = 0;
            if (pfix == pall) cnt++;
            if (sfix == sall) cnt++;
            if (rfix == rall) cnt++;

            if (cnt == 0) {
                if (s[i] == 'R') {
                    if (sfix < sall) s[i] = 'P';
                    else if (pfix < pall) s[i] = 'S';
                    continue;
                }
                else if (s[i] == 'S') {
                    if (pfix < pall) s[i] = 'R';
                    else if (rfix < rall) s[i] = 'P';
                    continue;
                }
                else if (s[i] == 'P') {
                    if (rfix < rall) s[i] = 'S';
                    else if (sfix < sall) s[i] = 'R';
                    continue;
                }
            } else if (cnt == 1) {
                if (pfix == pall) {
                    if (before == 'A') before = s[i];
                    if (before == 'R') { s[i] = 'S', before = 'S'; }
                    else { s[i] = 'R', before = 'R'; }
                }
                if (sfix == sall) {
                    if (before == 'A') before = s[i];
                    if (before == 'R') { s[i] = 'P', before = 'P'; }
                    else { s[i] = 'R', before = 'R'; }
                }
                if (rfix == rall) {
                    if (before == 'A') before = s[i];
                    if (before == 'S') { s[i] = 'P', before = 'P'; }
                    else { s[i] = 'S', before = 'S'; }
                }
            } else if (cnt == 2) {
                if (pfix == pall && sfix == sall) s[i] = 'R';
                if (pfix == pall && rfix == rall) s[i] = 'S';
                if (sfix == sall && rfix == rall) s[i] = 'P';
            }
        }
    }
    
    cout << "! " << s << endl;
    return 0;
}