#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    vector <int> v;
    v.push_back(2);
    for (int i=3; i<1000; i++) {
        for (int j=0; j<v.size(); j++) {
            if (i%v[j] == 0) break;
            if (j == v.size()-1) v.push_back(i);
        }
    }

    int T; cin >> T;
    while (T--) {
        int N; cin >> N;

        bool out = 0;
        for (int i=0; i<v.size(); i++) {
            for (int j=i; j<v.size(); j++) {
                for (int k=j; k<v.size(); k++) {
                    if (v[i]+v[j]+v[k] == N) {
                        cout << v[i] << ' ' << v[j] << ' ' << v[k] << '\n';
                        out = 1;
                        break;
                    }
                }
                if (out) break;
            }
            if (out) break;
        }
    }
    return 0;
}