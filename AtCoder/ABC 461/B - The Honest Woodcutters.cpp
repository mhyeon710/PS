#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int N; cin >> N;

    vector <int> a(N+1), b(N+1);
    for (int i=1; i<=N; i++) cin >> a[i];
    for (int i=1; i<=N; i++) cin >> b[i];

    bool can = true;
    for (int i=1; i<=N; i++) {
        if (a[b[i]] != i) {
            can = false;
            break;
        }
    }

    cout << (can ? "Yes" : "No");
    return 0;
}