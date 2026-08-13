#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int arr[1000][1000], row[1000], col[1000];
int main() {
    fio();
    int T;
    cin >> T;
    while (T--) {
        int N, M;
        cin >> N >> M;

        vector <int> row(N), col(N);
        for (int i=0; i<N; i++) {
            for (int j=0; j<N; j++) {
                cin >> arr[i][j];
            }
        }

        for (int i=0; i<N; i++) {
            for (int j=0; j<N; j++) {
                row[i] += arr[i][j];
            }
        }

        for (int j=0; j<N; j++) {
            for (int i=0; i<N; i++) {
                col[j] += arr[i][j];
            }
        }

        for (int t=0; t<M; t++) {
            int r1, c1, r2, c2, v;
            cin >> r1 >> c1 >> r2 >> c2 >> v;
            
            int mul = v * (c2 - c1 + 1);
            for (int i=r1-1; i<r2; i++) {
                row[i] += mul;
            }

            mul = v * (r2 - r1 + 1);
            for (int i=c1-1; i<c2; i++) {
                col[i] += mul;
            }
        }

        for (int i=0; i<N; i++) cout << row[i] << ' '; cout << '\n';
        for (int i=0; i<N; i++) cout << col[i] << ' '; cout << '\n';
    }
    return 0;
}