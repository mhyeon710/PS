#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

string s, t;
int ssize, tsize;
int dp[3001][3001];

bool cur(int i, int j) {
    if (i==ssize && j==tsize) return true;
    if ((i==ssize && j<tsize) || (i<ssize && j==tsize)) return false;

    if (s[i] == t[j]) cur(i+1, j+1);
    
}

int main() {
    fio();
    cin >> s >> t;
    ssize = s.size();
    tsize = t.size();

    memset(dp, -1, sizeof(dp));

    if (cur(0, 0)) cout << "Yes";
    else cout << "No";
    
    return 0;
}