#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int A, B, G;
    cin >> A >> B >> G;

    string s;
    set <string> a, b;
    
    for (int i=0; i<A; i++) {
        cin >> s;
        a.insert(s);
    }  
    for (int i=0; i<B; i++) {
        cin >> s;
        b.insert(s);
    }

    int as = 0, bs = 0;
    for (int i=0; i<G; i++) {
        cin >> s;
        if (a.find(s) != a.end()) as++;
        else bs++;
    }
    
    if (as > bs) cout << "A";
    else if (as == bs) cout << "TIE";
    else cout << "B";
    return 0;
}