#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int N, A, B;
    cin >> N >> A >> B;

    vector <int> a(A), b(B);
    for (int i=0; i<A; i++) cin >> a[i];
    for (int i=0; i<B; i++) cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    for (auto x:a) cout << x << ' '; cout << endl;
    for (auto x:b) cout << x << ' '; cout << endl;

    int i = 0;
    while (i < N) {
        int asize = a.size();
        int bsize = b.size();
        
    }


    return 0;
}