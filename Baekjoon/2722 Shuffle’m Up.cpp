#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int T; cin >> T;
    while (T--) {
        int N; cin >> N;

        string s1, s2, ans;
        cin >> s1 >> s2 >> ans;

        int cnt = 0;

        set <string> s;
        while (1) {
            string temp = "";
            for (int i=0; i<N; i++) {
                temp += s2[i];
                temp += s1[i];
            }
            cnt++;

            if (ans == temp) break;
            if (s.find(temp) != s.end()) {
                cnt = -1;
                break;
            }

            s1 = temp.substr(0, N);
            s2 = temp.substr(N, N);
            s.insert(temp);
        }

        cout << cnt << '\n';
    }
    return 0;
}