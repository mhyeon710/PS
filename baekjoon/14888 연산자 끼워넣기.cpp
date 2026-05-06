#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int N; cin >> N;

    vector <int> v(N), op;
    for (int i=0; i<N; i++) cin >> v[i];
    for (int i=0; i<4; i++) {
        int x; cin >> x;
        for (int j=0; j<x; j++) {
            op.push_back(i);
        }
    }

    int maxi = INT_MIN, mini = INT_MAX;
    do {
        int cal = v[0];
        for (int i=1; i<N; i++) {
            if (op[i-1] == 0) cal += v[i];
            else if (op[i-1] == 1) cal -= v[i];
            else if (op[i-1] == 2) cal *= v[i];
            else cal /= v[i];
        }

        maxi = max(cal, maxi);
        mini = min(cal, mini);
    } while (next_permutation(op.begin(), op.end()));

    cout << maxi << '\n' << mini;
    return 0;
}