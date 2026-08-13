#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <vector>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;
 
int main() {
    fio();
    int T; cin >> T;
    while (T--) {
        int n, s, e, w, N;
        n = s = e = w = 0;
 
        string S;
        cin >> N >> S;
        if (N%2) { cout << "NO\n"; continue; }
 
        for (int i=0; i<N; i++) {
            if (S[i] == 'N') { n++; continue; }
            if (S[i] == 'E') { e++; continue; }
            if (S[i] == 'W') { w++; continue; }
            if (S[i] == 'S') { s++; continue; }
        }
 
        if (N == 2) {
            if (n == 2 || e == 2 || w == 2 || s == 2) 
                cout << "RH\n";
            else cout << "NO\n";
            continue;
        }
        
        if (((e+w)%2 == 1) || ((n+s)%2 == 1)) { cout << "NO\n"; continue; }
 
        if (N == 4) {
            if (n == 1 && e == 1 && w == 1 && s == 1) {
                for (int i=0; i<4; i++) {
                    if (S[i] == 'N' || S[i] == 'S') cout << 'R';
                    if (S[i] == 'W' || S[i] == 'E') cout << 'H';
                }
                cout << '\n';
                continue;
            }
        }
 
        bool rn, re, rw, rs;
        rn = rs = 1;
        re = rw = 0;
        for (int i=0; i<N; i++) {
            if (S[i] == 'N') {
                if (rn) { cout << 'R'; rn = 0; }
                else { cout << 'H'; rn = 1; }
                continue;
            }
            if (S[i] == 'E') {
                if (re) { cout << 'R'; re = 0; }
                else { cout << 'H'; re = 1; }
            }
            if (S[i] == 'W') {
                if (rw) { cout << 'R'; rw = 0; }
                else { cout << 'H'; rw = 1; }
            }
            if (S[i] == 'S') {
                if (rs) { cout << 'R'; rs = 0; }
                else { cout << 'H'; rs = 1; }
            }
        }
        cout << '\n';
    }
    return 0;
}