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

    if (N%2 == 0) {
        cout << N * M << '\n';
        for (int i=0; i<N; i++) {
            if (i%2 == 0) for (int j=1; j<M; j++) cout << i+1 << ' ' << j+1 << '\n';
            else for (int j=M-1; j>=1; j--) cout << i+1 << ' ' << j+1 << '\n';
        }
        for (int i=N-1; i>=0; i--) cout << i+1 << ' ' << 1 << '\n';
    } else if (M%2 == 0) {
        cout << N * M << '\n';
        for (int j=0; j<M; j++) {
            if (j%2 == 0) for (int i=1; i<N; i++) cout << i+1 << ' ' << j+1 << '\n';
            else for (int i=N-1; i>=1; i--) cout << i+1 << ' ' << j+1 << '\n';
        }
        for (int j=M-1; j>=0; j--) cout << 1 << ' ' << j+1 << '\n';
    } else {
        cout << N * M - 1 << '\n';
        for (int i=0; i<N-2; i++) {
            if (i%2 == 0) for (int j=1; j<M; j++) cout << i+1 << ' ' << j+1 << '\n';
            else for (int j=M-1; j>=1; j--) cout << i+1 << ' ' << j+1 << '\n';
        }
        cout << N-1 << ' ' << M << '\n';
        cout << N << ' ' << M << '\n';
        cout << N-1 << ' ' << M-1 << '\n';
        bool up = true;
        for (int j=M-3; j>=1; j--) {
            if (up) { 
                cout << N << ' ' << j+1 << '\n';
                cout << N-1 << ' ' << j+1 << '\n';
                up = false;
            } else {
                cout << N-1 << ' ' << j+1 << '\n';
                cout << N << ' ' << j+1 << '\n';
                up = true;
            }
        }
        for (int i=N-1; i>=0; i--) cout << i+1 << ' ' << 1 << '\n';
    }
    return 0;
}