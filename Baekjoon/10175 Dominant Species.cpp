#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int N; cin >> N;

    vector <string> v;
    v.push_back("Bobcat");
    v.push_back("Coyote");
    v.push_back("Mountain Lion");
    v.push_back("Wolf");

    for (int i=0; i<N; i++) {
        string name, s;
        cin >> name >> s;

        vector <int> cnt(4, 0);
        for (auto c:s) {
            if (c == 'B') cnt[0] += 2;
            else if (c == 'C') cnt[1] += 1;
            else if (c == 'M') cnt[2] += 4;
            else cnt[3] += 3;
        }

        int idx = 0, maxi = cnt[0];
        for (int i=1; i<4; i++) {
            if (cnt[i] > maxi) {
                idx = i;
                maxi = cnt[i];
            }
        }

        bool can = true;
        for (int i=0; i<4; i++) {
            if (idx == i) continue;
            if (cnt[i] == maxi) {
                can = false;
                break;
            }
        }

        if (!can) cout << name << ": There is no dominant species\n";
        else cout << name << ": The " << v[idx] << " is the dominant species\n"; 
    }

    return 0;
}