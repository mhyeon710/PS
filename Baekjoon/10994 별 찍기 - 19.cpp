#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int N; cin >> N;

    int h = 4 * (N-1)+ 1;
    for (int i=0; i<h; i++) {
        int s = min(i, h-i);
        
        for (int j=0; j<s; j++) {
            if (j%2 == 0) cout << '*';
            else cout << ' ';
        }
        for (int j=s; j<h-s; j++) {
            if (i%2 == 0) cout << '*';
            else cout << ' ';
        }
        for (int j=h-s; j<h; j++) {
            if (j%2 == 0) cout << '*';
            else cout << ' ';
        }

        cout << '\n';
    }
    return 0;
}