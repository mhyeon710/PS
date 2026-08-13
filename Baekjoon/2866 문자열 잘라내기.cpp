#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int R, C;
    cin >> R >> C;

    char arr[R][C];
    for (int i=0; i<R; i++) {
        for (int j=0; j<C; j++) {
            cin >> arr[i][j];
        }
    }

    vector <string> v(C);
    for (int j=0; j<C; j++) {
        string s = "";
        for (int i=0; i<R; i++) {
            s += arr[i][j];
        }
        v[j] = s;
    }

    for (int i=0; i<R; i++) {
        sort(v.begin(), v.end());

        bool br = false;
        for (int idx=0; idx<C-1; idx++) {
            if (v[idx] == v[idx+1]) {
                br = true;
                cout << i-1 << '\n';
                break;
            }
        }

        for (int idx=0; idx<v.size(); idx++) {
            v[idx] = v[idx].substr(1, v[idx].size()-1);
        }

        if (br) break;
        if (i == R-1) cout << i;
    }

    return 0;
}