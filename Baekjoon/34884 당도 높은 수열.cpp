#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int arr[150000];
int main() {
    fio();
    
    queue <pii> q;
    q.push({0, 150000-1});

    int now = 150000;
    while (!q.empty()) {
        pii f = q.front(); q.pop();

        auto [l, r] = f;
        if (l > r) continue;

        int m = (l+r)/2;
        arr[m] = now--;

        q.push({l, m-1});
        q.push({m+1, r});
    }
    
    for (auto x:arr) cout << x << ' ';
    return 0;
}