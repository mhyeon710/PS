#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int N; cin >> N;

    for (int i=1; i<=N; i++) {
        vector <ll> v(3);
        cin >> v[0] >> v[1] >> v[2];

        sort(v.begin(), v.end());

        cout << "Scenario #" << i << ":\n";
        v[0] * v[0] + v[1] * v[1] == v[2] * v[2] ? (cout << "yes\n\n") : (cout << "no\n\n");
    }
    
    return 0;
}