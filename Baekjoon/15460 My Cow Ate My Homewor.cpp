#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define ld      long double
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

long double mean[200001];
int main() {
    fio();
    int N; cin >> N;

    vector <ld> v(N);
    for (int i=0; i<N; i++) cin >> v[i];

    ld mini = min(v[N-1], v[N-2]);
    ld suma = v[N-1] + v[N-2];
    mean[N-2] = suma - mini;

    for (int i=N-3; i>=0; i--) {
        suma += v[i];
        mini = min(mini, v[i]);
        mean[i] = (suma - mini) / (N-i-1);
    }

    ld maxi = 0;
    for (int i=0; i<N-1; i++) {
        maxi = max(maxi, mean[i]);
    }

    for (int i=1; i<N-1; i++) {
        if (maxi == mean[i]) {
            cout << i << ' ';
        }
    }

    return 0;
}