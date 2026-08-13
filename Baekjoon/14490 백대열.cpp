#include <bits/stdc++.h>
#include <numeric>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int gcd(int a, int b) { if (!b) return a; return gcd(b, a%b); }

int main() {
    fio();
    string s; cin >> s;
    
    int idx = 0;
    for (int i=0; i<s.size(); i++) {
        if (s[i] == ':') {
            idx = i;
            break;
        }
    }

    int N = stoi(s.substr(0, idx));
    int M = stoi(s.substr(idx+1, s.size()-idx));
    int GCD = gcd(N, M);
    N /= GCD; M /= GCD;
    
    cout << N << ":" << M;
    return 0;
}