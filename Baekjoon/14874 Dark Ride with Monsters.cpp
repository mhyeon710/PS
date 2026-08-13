#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int arr[200001], cnt, init;
bool visited[200001];

void dfs(int i) {
    if (arr[i] == init) return;

    cnt++;
    visited[arr[i]] = 1;
    dfs(arr[i]);
}

int main() {
    fio();
    int N;
    while (cin >> N) {
        cnt = 0;
        memset (visited, 0, sizeof(visited));

        for (int i=1; i<=N; i++) cin >> arr[i];
        for (int i=1; i<=N; i++) {
            if (!visited[i]) {
                init = i;
                visited[i] = 1;
                dfs(i);
            }
        }

        cout << cnt << '\n';
    }
    return 0;
}