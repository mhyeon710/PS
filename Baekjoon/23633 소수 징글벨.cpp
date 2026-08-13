#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    
    vector <int> v;
    for (int i=2; i<=2000; i++) {
        bool check = false;
        for (auto x:v) {
            if (i%x == 0) {
                check = true;
                break;
            }
        }
        if (!check) v.push_back(i);
    }
    
    // for (auto x:v) cout << x << ' ';

    set <int> s;
    for (auto x:v) s.insert(x);

    int T; cin >> T;
    while (T--) {
        int A, B;
        cin >> A >> B;
        
        int a = 0, b = 0;

        int now = 1;
        bool turn = 1;
        bool breakpoint = 0;
        while (!breakpoint) {
            for (int i=0; i<A; i++) {
                if (now > B) {
                    breakpoint = 1;
                    break;
                }
                
                if (s.find(now) != s.end()) {
                    if (turn) a++;
                    else b++;
                }

                now++;

                if (turn) turn = 0;
                else turn = 1;
            }
        }
        
        if (a > b) cout << "kuro\n";
        else if (a == b) cout << "draw\n";
        else cout << "siro\n";
    }
    return 0;
}