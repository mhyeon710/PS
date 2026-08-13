#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

// N = 5101, M = 500000, P = 500000;
// 단일 입력 묶음 = P/N = 98.xx (98개)
// 총 묶음 N / (P/N) = 5101 / 98 = 52.xx (총 53개)
int main() {
    fio();
    int N, M, P; 
    cin >> N >> M >> P;

    cout << N*2 + 53 << ' ' << N + 53*N << '\n';

    int mid = N*2 + 1;
    for (int i=1; i<=N; i+=98) {
        for (int j=i; j<=min(i+98-1, N); j++) {
            cout << j << ' ' << mid << '\n';
        }
        for (int j=N+1; j<=N*2; j++) {
            cout << mid << ' ' << j << '\n';
        }
        mid++;
    }

    return 0;
}