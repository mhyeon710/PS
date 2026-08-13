#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

priority_queue<ll, vector<ll>, greater<ll>> pq;
int main() {
    fio();
    int N; cin >> N;

    ll sum = 0;
    for (int i=0; i<N; i++) {
        ll x;
        cin >> x;
        pq.push(x);
        sum += x;
    }

    while (pq.top() < -sum) {
        ll temp = -sum;
        sum = sum - pq.top() + temp;
        pq.pop();
        pq.push(temp);
    }

    cout << sum;
    return 0;
}