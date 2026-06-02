#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <queue>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

priority_queue <int> max_pq; // less than X
priority_queue <int, vector<int>, greater<int>> min_pq; // more than X
// max_pq.top() <= X <= min_pq.top(); 

int main() {
    fio();
    int X, Q;
    cin >> X >> Q;

    Q--;
    int a, b;
    cin >> a >> b;
    
    vector <int> v;
    v.push_back(a);
    v.push_back(b);
    v.push_back(X);
    sort(v.begin(), v.end());

    max_pq.push(v[0]);
    X = v[1];
    min_pq.push(v[2]);

    cout << X << '\n';
    
    while (Q--) {
        int a, b;
        cin >> a >> b;
        if (a > b) swap(a, b);

        if (X < a && X < b) {
            max_pq.push(X);
            
            int t = min_pq.top(); min_pq.pop();

            vector <int> v; v.push_back(a);
            v.push_back(b); v.push_back(t);
            sort(v.begin(), v.end());

            X = v[0];
            min_pq.push(v[1]);
            min_pq.push(v[2]);
        } else if (a < X && b < X) {
            min_pq.push(X);

            int t = max_pq.top(); max_pq.pop();

            vector <int> v; v.push_back(a);
            v.push_back(b); v.push_back(t);
            sort(v.rbegin(), v.rend());

            X = v[0];
            max_pq.push(v[1]);
            max_pq.push(v[2]);
        } else {
            max_pq.push(a);
            min_pq.push(b);
        }

        cout << X << '\n';
    }
    
    return 0;
}