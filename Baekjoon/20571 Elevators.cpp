#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    string s;
    cin >> s;
    int N;
    cin >> N;
    
    if (s == "residential") {
        if (N == 1) cout << 0;
        else if (N <= 5) cout << 1;
        else if (N <= 10) cout << 2;
        else if (N <= 15) cout << 3;
        else cout << 4;
    } else if (s == "commercial") {
        if (N == 1) cout << 0;
        else if (N <= 7) cout << 1;
        else if (N <= 14) cout << 2;
        else cout << 3;
    } else {
        if (N == 1) cout << 0;
        else if (N <= 4) cout << 1;
        else if (N <= 8) cout << 2;
        else if (N <= 12) cout << 3;
        else if (N <= 16) cout << 4;
        else cout << 5;
    }
    return 0;
}