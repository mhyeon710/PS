#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int N; cin >> N;

    vector <int> v(N+1), suma(N+1);
    for (int i=1; i<=N; i++) {
        cin >> v[i];
    }
    
    for (int i=2; i<=N; i++) {
        if (v[i-1] > v[i]) suma[i] = suma[i-1] + 1;
        else suma[i] = suma[i-1];
	}

    int Q; cin >> Q;
    for (int i=0; i<Q; i++) {
        int a, b;
        cin >> a >> b;

        int ans = 1 + suma[b] - suma[a];

        if (ans == 1) cout << "1\n";
        else if (ans == 2 && v[a] > v[b]) cout << "2\n";
        else cout << "3\n"; 
    }
    return 0;
}