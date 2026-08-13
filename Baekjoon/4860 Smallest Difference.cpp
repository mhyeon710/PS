#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();

    string T;
    getline(cin, T);

    int t = stoi(T);
    while (t--) {
        string line, token;
        getline(cin, line);

        vector <string> v;
        stringstream ss(line);

        while (ss >> token) {
            v.push_back(token);
        }

        int vsize = v.size();
        vector <bool> check(vsize, 0);
        for (int i=vsize-1; i>vsize-1-vsize/2; i--) check[i] = 1;

        int ans = 1000000;
        do {
            string ta = "", tb = "";

            for (int i=0; i<vsize; i++) {
                if (!check[i]) ta += v[i];
                else tb += v[i];
            }

            do {
                do {
                    if ((ta.size() >= 2 && ta[0] == '0') || (tb.size() >= 2 && tb[0] == '0')) continue;
                    ans = min(ans, abs(stoi(ta) - stoi(tb)));
                } while (next_permutation(tb.begin(), tb.end()));
            } while (next_permutation(ta.begin(), ta.end()));
        } while (next_permutation(check.begin(), check.end()));

        cout << ans << ' ';
    }

    return 0;
}