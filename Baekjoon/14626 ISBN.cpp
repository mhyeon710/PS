#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    string s;
    cin >> s;

    if (s[12] == '*') {
        int cnt = 0;
        for (int i=0; i<12; i++) {
            if (i%2 == 0) cnt += s[i] - '0';
            else cnt += (s[i] - '0') * 3;
        }
        cnt = 10 - cnt%10;
        if (cnt == 10) cnt = 0;
        cout << cnt;
    } else {
        for (int i=0; i<10; i++) {
            int cnt = 0;

            int idx;
            for (int j=0; j<12; j++) {
                if (s[j] == '*') {
                    idx = j;
                    if (j%2 == 0) cnt += i;
                    else cnt += i*3;
                } else {
                    if (j%2 == 0) cnt += s[j] - '0';
                    else cnt += (s[j] - '0')*3;
                }
            }
            cnt += s[12] - '0';
            if (cnt % 10 == 0) {
                cout << i;
                break;
            }
        }
    }

    return 0;
}