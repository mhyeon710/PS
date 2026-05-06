#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int N, M, K, x, p[4000001];
void init    (int N)        { for (int i=1; i<=N; i++) p[i] = i; }
int  find    (int x)        { return x == p[x] ? x : p[x] = find(p[x]); }
void Union   (int x, int y) { x = find(x); y = find(y); x != y ? p[x] = y : p[y] = x; }

int main() {
    fio();
    cin >> N >> M >> K;

    vector <int> v(M);
    for (int i=0; i<M; i++) cin >> v[i];

    sort(v.begin(), v.end());

    init(N);

    for (int i=0; i<K; i++) {
        cin >> x;

        int idx = find(upper_bound(v.begin(), v.end(), x) - v.begin());

        cout << v[idx] << '\n';
        
        Union(idx, idx+1);
    }

    return 0;
}

// #include <bits/stdc++.h>
// #define ll      long long
// #define pii     pair<int, int>
// #define pll     pair<ll, ll>
// #define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
// using namespace std;

// int main() {
//     fio();
//     int N, M, K;
//     cin >> N >> M >> K;

//     vector <int> v(M);
//     for (int i=0; i<M; i++) cin >> v[i];
//     sort(v.begin(), v.end());

//     set <int> s;
//     auto it = s.begin();
//     for (int i=M-1; i>=0; i--) {
//         it = s.insert(it, v[i]);
//     }

//     while (K--) {
//         int x; cin >> x;
//         auto it = s.upper_bound(x);
//         cout << *it << '\n';
//         s.erase(it);
//     }

//     return 0;
// }