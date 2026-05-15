#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int N, M;
    cin >> N >> M;

    map<int, int>m;
    for (int i=0; i<N; i++) {
        int x; cin >> x;
        m[x]++;
    }

    bool can = true;
    for (auto x:m) {
        if (x.second >= 2) can = false;
    }

    cout << (can ? "Yes" : "No") << '\n';
    cout << (m.size() == M ? "Yes" : "No") << '\n';
    return 0;
}