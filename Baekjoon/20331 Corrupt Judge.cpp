#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int N, p;
    cin >> N >> p;

    vector <int> v(N);
    for (int i=0; i<N; i++) cin >> v[i];
    
    vector <int> ans(N, 0);
    if (v[N-1]) ans[N-1] = 1; 
    for (int i=N-2; i>=0; i--) {
        if (v[i] > v[i+1]) ans[i] = ans[i+1] + 1;
        else ans[i] = ans[i+1];
    }

    // for (auto x:ans) cout << x << '\n';

    if (ans[0] == 0) 
        for (auto x:ans) cout << x << '\n';
    else if (ans[0] != p)
        cout << "ambiguous";
    else 
        for (auto x:ans) cout << x << '\n';
    
    return 0;
}