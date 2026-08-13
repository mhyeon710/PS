#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int jungle[1001][1001], ocean[1001][1001], ice[1001][1001];
int main() {
    fio();
    int N, M, K;
    cin >> N >> M >> K;

    for (int i=1; i<=N; i++) {
        for (int j=1; j<=M; j++) {
            char c; cin >> c;
            if (c == 'J') jungle[i][j] = 1 + jungle[i-1][j] + jungle[i][j-1] - jungle[i-1][j-1];
            else jungle[i][j] = 0 + jungle[i-1][j] + jungle[i][j-1] - jungle[i-1][j-1];

            if (c == 'O') ocean[i][j] = 1 + ocean[i-1][j] + ocean[i][j-1] - ocean[i-1][j-1];
            else ocean[i][j] = 0 + ocean[i-1][j] + ocean[i][j-1] - ocean[i-1][j-1];


            if (c == 'I') ice[i][j] = 1 + ice[i-1][j] + ice[i][j-1] - ice[i-1][j-1];
            else ice[i][j] = 0 + ice[i-1][j] + ice[i][j-1] - ice[i-1][j-1];
        }
    }

    for (int i=0; i<K; i++) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        cout << jungle[c][d] - jungle[a-1][d] - jungle[c][b-1] + jungle[a-1][b-1] << ' ';
        cout << ocean[c][d] - ocean[a-1][d] - ocean[c][b-1] + ocean[a-1][b-1] << ' ';
        cout << ice[c][d] - ice[a-1][d] - ice[c][b-1] + ice[a-1][b-1] << '\n';
    }
    return 0;
}