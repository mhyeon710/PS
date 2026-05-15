#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, maxi;
long double arr[20], now = 0.5;

void dfs(long double now, int idx, int cnt) {
    if (idx == N) {
        maxi = max(cnt, maxi);
        return;
    }

    long double now1 = now - arr[idx];
    if (now * now1 < 0) dfs(now1, idx+1, cnt+1);
    else dfs(now1, idx+1, cnt);

    long double now2 = now + arr[idx];
    if (now * now2 < 0) dfs(now2, idx+1, cnt+1);
    else dfs(now2, idx+1, cnt);

    return;
}

int main() {
    cin >> N;
    for (int i=0; i<N; i++)
        cin >> arr[i];

    dfs(0.5, 0, 0);

    cout << maxi;
    return 0;
}