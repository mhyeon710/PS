#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int cnt[26];
int main() {
    fio();
    int N; cin >> N;
    string s; cin >> s;
    
    for (int i=1; i<=N; i++) {
        cnt[s[i-1] - 'A']++;
        if (cnt['A'-'A'] >= 2 && cnt['R'-'A'] >= 1 && cnt['K'-'A'] >= 1 && cnt['T'-'A'] >= 1 && cnt['S'-'A'] >= 1) {
            cout << i;
            break;
        }
    }
    
    return 0;
}