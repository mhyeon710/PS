#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

priority_queue <int> pq;

int main() {
    fio();
    int N; cin >> N;


    for (int i=0; i<N; i++) {
        int a; cin >> a;
        if (a == 0) {
            if (pq.empty()) cout << "-1\n";
            else { cout << pq.top() << '\n'; pq.pop(); }
        } else {
            for (int t=0; t<a; t++) {
                int x; cin >> x;
                pq.push(x);
            }
        }
    }
    return 0;
}