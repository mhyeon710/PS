#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int arr[101][101];
int main() {
    fio();
    int N; cin >> N;

    int K, x;
    for (int i=1; i<=N; i++) {
        cin >> K;

        for (int j=0; j<K; j++) {
            cin >> x;
            arr[x][i] = 1;
        }
    }

    for (int i=1; i<=N; i++) {
        int cnt = 0;
        for (int j=1; j<=N; j++) {
            if (arr[i][j]) cnt++;
        }

        cout << cnt << ' ';
        for (int j=1; j<=N; j++) {
            if (arr[i][j]) cout << j << ' ';
        }
        cout << '\n';
    }
    return 0;
}