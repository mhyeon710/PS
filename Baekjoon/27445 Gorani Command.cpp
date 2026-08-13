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

    int arr[N][M];
    bool check = false;
    for (int i=0; i<N-1; i++) {
        cin >> arr[i][0];
        if (arr[i][0] == 0) {
            cout << i+1 << ' ' << 1;
            check = true;
        }
    }


    for (int j=0; j<M; j++) {
        cin >> arr[N-1][j];
        if (arr[N-1][j] == 0) {
            cout << N << ' ' << j+1;
            check = true;
        }
    }

    if (check) return 0;

    for (int i=0; i<N-1; i++) {
        for (int j=1; j<M; j++) {
            if (arr[i][0] + arr[N-1][j] == arr[N-1][0]) {
                cout << i+1 << ' ' << j+1;
                return 0;
            }
        }
    }
}