#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int N; cin >> N;

    int cnt = 0;
    for (int i=1; i<=N; i++) {
        int t = i;
        int suma = 0;
        while (t) {
            suma += t%10;
            t /= 10;
        }
        if (i % suma == 0) cnt++;
    }

    cout << cnt;
    return 0;
}