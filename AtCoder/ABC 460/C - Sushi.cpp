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
    int N, M;
    cin >> N >> M;

    vector <int> rice(N), topping(M);
    for (int i=0; i<N; i++) cin >> rice[i];
    for (int i=0; i<N; i++) rice[i] *= 2;
    for (int i=0; i<M; i++) cin >> topping[i]; // topping <= rice * 2

    sort(rice.begin(), rice.end());
    sort(topping.begin(), topping.end());

    int ans = 0;
    int i = N-1;
    for (int j=M-1; j>=0; j--) {
        if (i < 0) break;
        if (topping[j] > rice[i]) {
            continue;
        }

        ans++;
        i--;
    }

    cout << ans;
    return 0;
}
// 2 4 8 16
// 2 3 9 9 14