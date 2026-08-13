// #include <bits/stdc++.h>
// #define ll      long long
// #define pii     pair<int, int>
// #define pll     pair<ll, ll>
// #define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
// using namespace std;

// int main() {
//     fio();
    
//     int N;
//     cin >> N;

//     vector <ll> T(N), v(N);
//     for (int i=0; i<N; i++) cin >> T[i];
//     for (int i=0; i<N; i++) cin >> v[i];
//     for (int i=0; i<N; i++) {
//         ll n = T[i];
//         ll target = v[i];

//         if (target == 0) {
//             cout << 0 << ' ';
//             continue;
//         }

//         if (n == 1) {
//             cout << 1 << ' ';
//             continue;
//         }

//         ll l = 1, r = 1e9, m, ans;
//         while (l <= r) {
//             m = (l+r)/2;

//             ll suma = m + m/n;
//             ll rem = m%n + m/n;

//             while (rem >= n) {
//                 suma += rem/n;
//                 rem = rem%n + rem/n;
//             }

//             if (suma >= target) {
//                 r = m-1;
//                 ans = m;
//             } else {
//                 l = m+1;
//             }
//         }

//         cout << ans << ' ';
//     }

//     return 0;
// }

#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int N; cin >> N;
    vector <int> T(N), v(N);
    for (int i=0; i<N; i++) cin >> T[i];
    for (int i=0; i<N; i++) cin >> v[i];
    for (int i=0; i<N; i++) {
        int n = T[i];
        int target = v[i];

        if (target == 0) {
            cout << 0 << ' ';
            continue;
        }

        cout << target - (target-1)/n << ' ';
    }
    return 0;
}