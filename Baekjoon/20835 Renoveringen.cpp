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

    vector <int> a(N), b(M), ans;
    for (int i=0; i<N; i++) cin >> a[i];
    for (int i=0; i<M; i++) cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    
    for (int i=0; i<N; i++) {
        auto ita = a.rbegin();
        auto itb = b.rbegin();
        
        if (*ita <= *itb) b.pop_back();
        else ans.push_back(*ita);
        
        a.pop_back();
    }

    cout << ans.size() << '\n';
    for (auto it=ans.rbegin(); it != ans.rend(); it++) {
        cout << *it << ' ';
    }
    return 0;
}