#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int N, M;
    cin >> N >> M;

    int now = M*2;
    for (int i=0; i<N; i++) {
        cout << now << ' ';
        now += M;
    }
    
    return 0;
}