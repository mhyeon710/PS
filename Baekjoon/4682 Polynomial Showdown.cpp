#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();

    string line;
    while (getline(cin, line)) {
        if (line.empty()) continue;
        stringstream ss(line);
        vector <int> v;

        int a;
        int cnt = 0;
        bool init = true;
        int i = 9;
        while (ss >> a) {
            i--;
            if (a != 0) cnt++;
            if (init && a) {
                if (i == 0) {
                    cout << a;
                } else if (i == 1) {
                    if (a == 1) cout << "x";
                    else if (a == -1) cout << "-x";
                    else cout << a << "x";
                } else {
                    if (a == 1) cout << "x^" << i;
                    else if (a == -1) cout << "-x^" << i;
                    else cout << a << "x^" << i;
                }
                init = false;
                continue;
            }

            if (!init && a) {
                if (a > 0) cout << " + ";
                else cout << " - ";

                if (i == 0) cout << abs(a);
                else if (i == 1) {
                    if (a == 1 || a == -1) cout << "x";
                    else cout << abs(a) << "x";
                }
                else {
                    if (a == 1 || a == -1) cout << "x^" << i;
                    else cout << abs(a) << "x^" << i;
                }
            }
        }

        if (cnt == 0) cout << 0;
        cout << '\n';
    }
    
    return 0;
}