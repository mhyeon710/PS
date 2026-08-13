#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int N; cin >> N;
    
    set <string> s;
    s.insert("ChongChong");
    for (int i=0; i<N; i++) {
        string a, b;
        cin >> a >> b;

        bool ba = 0, bb = 0;
        if (s.find(a) != s.end()) ba = 1;
        if (s.find(b) != s.end()) bb = 1;
        if (ba || bb) {
            s.insert(a);
            s.insert(b);
        }
    } 

    cout << s.size();
    return 0;
}