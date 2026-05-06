#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

bool v[200001];
int N, ans, ans1, ans2;
vector <int> arr(200001);

void dfs(int init, int now, int cnt) {
    v[now] = 1;
    cnt++;

    if (now == init) {
        ans += cnt-1;
        return;
    }

    dfs(init, arr[now], cnt);
    return;
}

int main() {
    fio();
    cin >> N;

    for (int i=1; i<=N; i++) {
        cin >> arr[i];
    }

    for (int i=1; i<=N; i++) {
        if (!v[i]) dfs(i, arr[i], 0);
    }

    ans1 = ans;
    for (int i=1; i<=N/2; i++) {
        swap(arr[i], arr[N-i+1]);
    }

    ans = 0;
    
    memset(v, 0, sizeof(v));
    for (int i=1; i<=N; i++) {
        if (!v[i]) dfs(i, arr[i], 0);
    }
    
    ans2 = ans;

    cout << N-2 << ' ' << min(ans1, ans2);
    return 0;
}