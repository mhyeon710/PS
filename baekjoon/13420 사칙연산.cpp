#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int T; cin >> T; 
    while (T--) {
        ll a, b, c;
        char aa, bb;
        cin >> a >> aa >> b >> bb >> c;
        
        bool ans = false;
        switch (aa) {
            case '+': if (a + b == c) ans = 1; break;
            case '-': if (a - b == c) ans = 1; break;
            case '*': if (a * b == c) ans = 1; break;
            case '/': if (a / b == c) ans = 1; break;
        }
        cout << (ans ? "correct\n" : "wrong answer\n");
    }
    return 0;
}