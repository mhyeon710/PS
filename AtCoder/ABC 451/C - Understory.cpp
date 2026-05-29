#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <queue>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

map <int, int> m;
int main() {
    fio();
    int Q; cin >> Q;

    priority_queue <int, vector<int>, greater<int>> pq;
    while (Q--) {
        int q, h;
        cin >> q >> h;

        if (q == 1) {
            pq.push(h);
        } else {
            while (!pq.empty() && pq.top() <= h) {
                pq.pop();
            }
        }

        cout << pq.size() << '\n';
    }
    return 0;
}