#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int N;
string s;
map <string, int> m;

int main() {
    fio();
    cin >> N;

    int cnt = 0;
    for (int i=0; i<N; i++) {
        cin >> s;
        if (m[s] > i - m[s]) {
            cnt++;
        }
        m[s]++;
    }

    cout << cnt;
    return 0;
}