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

    int cnt = 0;
    while (1) {
        if (M == 0) break;

        int mod = N % M;
        M = mod;
        cnt++;
    }

    cout << cnt;
    return 0;
}