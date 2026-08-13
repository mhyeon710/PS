#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

bool arr[4][14];
int main() {
    fio();
    string s;
    cin >> s;

    bool ans = true;
    for (int i=0; i<s.size(); i+=3) {
        int num = stoi(s.substr(i+1, 2));
        if (s[i] == 'P') {
            if (arr[0][num]) ans = false;
            arr[0][num] = 1;
        }
        if (s[i] == 'K') {
            if (arr[1][num]) ans = false;
            arr[1][num] = 1;
        }
        if (s[i] == 'H') {
            if (arr[2][num]) ans = false;
            arr[2][num] = 1;
        }
        if (s[i] == 'T') {
            if (arr[3][num]) ans = false;
            arr[3][num] = 1;
        }
    }

    if (!ans) cout << "GRESKA";
    else {
        for (int i=0; i<4; i++) {
            int cnt = 13;
            for (int j=1; j<=13; j++) {
                if (arr[i][j]) cnt--;
            }
            cout << cnt << ' ';
        }
    }

    return 0;
}