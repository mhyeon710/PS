#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();

    vector <char> arr(32);
    for (int i=1; i<=26; i++) {
        arr[i] = 'A' + i - 1;
    }
    arr[0] = ' '; arr[27] = '\'';
    arr[28] = ','; arr[29] = '-';
    arr[30] = '.'; arr[31] = '?';

    while (1) {
        string l = "";

        while (1) {
            string s;
            getline(cin, s);
            if (s == "*") break;
            if (s == "#") {
                l = s;
                break;
            }
            l += s + '\n';
        }

        if (l == "#") break;

        int cnt = 0;
        string t = "";
        for (int i=0; i<l.size(); i++) {
            if (l[i] == ' ') {
                cnt++;
            } else if (cnt) {
                if (cnt%2) t += '0';
                else t += '1';
                cnt = 0;
            }
        }
        if (cnt) {
            if (cnt%2) t += '0';
            else t += '1';
        }
        while (t.size()%5) t += '0';
        
        for (int a=0; a<t.size(); a+=5) {
            int idx = 0;
            for (int i=16, j=a; i>=1 && j<a+5; i/=2, j++) {
                idx += i * (t[j] - '0');
            }
            cout << arr[idx];
        }
        cout << '\n';
    }

    return 0;
}