#include <iostream>
#include <vector>
using namespace std;

vector <vector<int>> v(100);

int main() {
    cin.tie(0), cout.tie(0);
    ios_base::sync_with_stdio(false);

    int Q, mod, cnt = 0;
    cin >> Q >> mod;
    while (Q--) {
        int f, x;
        cin >> f;
        
        if (f == 1) {
            cin >> x;
            x %= mod;
            v[x].emplace_back(++cnt);
        } else if (f == 2) {
            if (cnt == 0) continue;
            for (int i=0; i<mod; i++) {
                if (v[i].empty()) continue;
                if (v[i].back() == cnt) {
                    v[i].pop_back();
                    cnt--;
                    break;
                }
            }
        } else if (f == 3) {
            int mini = cnt;
            for (int i=0; i<mod; i++) {
                if (v[i].empty()) {
                    mini = -1;
                    break;
                }
                mini = min(mini, v[i].back());
            }
            cout << (mini == -1 ? -1 : cnt - mini + 1) << '\n';
        }
    }
    return 0;
}