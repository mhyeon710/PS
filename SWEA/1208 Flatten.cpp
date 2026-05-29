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
    for (int T=1; T<=10; T++) {
        int swap_cnt;
        cin >> swap_cnt;

        vector <int> v(100);
        for (int i=0; i<100; i++) cin >> v[i];

        sort(v.rbegin(), v.rend());
        if (v[0] - v[99] <= 1) {
            cout << "#" << T << " " << v[0] - v[99] << '\n';
            continue;
        }

        for (int i=0; i<swap_cnt; i++) {
            v[0]--;
            v[99]++;

            sort(v.rbegin(), v.rend());

            if (v[0] - v[99] <= 1) break;
        }

        cout << "#" << T << " " << v[0] - v[99] << '\n';
    }
    return 0;
}