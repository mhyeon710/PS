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
    int N, K;
    cin >> N >> K;
    string s; cin >> s;

    int cnt = 0;
    for (int i=0; i<N; i++) {
        if (s[i] != 'P') continue;
        for (int j=max(0, i-K); j<=min(N-1, i+K); j++) {
            if (s[j] == 'H') {
                cnt++;
                s[i] = s[j] = '.';
                break;
            }
        }
    }

    cout << cnt;
    return 0;
}