#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <set>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    ll N, K, M;
    cin >> N >> K >> M;

    vector <pll> jewel;
    for (int i=0; i<N; i++) {
        ll c, v;
        cin >> c >> v;
        jewel.push_back({v, c});
    }

    sort(jewel.rbegin(), jewel.rend());

    set <int> color, number;
    for (int i=0; i<N; i++) {
        auto [v, c] = jewel[i];

        if (color.find(c) == color.end()) {
            color.insert(c);
            number.insert(i);
        }

        if (color.size() == M) break;
    }

    if (number.size() < K) {
        for (int i=0; i<N; i++) {
            if (number.find(i) == number.end()) {
                number.insert(i);
            }

            if (number.size() == K) break;
        }
    }


    ll ans = 0;
    for (auto i: number) {
        ans += jewel[i].first;
    }

    cout << ans;
    return 0;
}