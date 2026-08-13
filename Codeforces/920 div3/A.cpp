#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
 
void fio() { cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(false); }
 
int main() {
    fio();
    int T; cin >> T;
    while (T--) {
        vector<pair<int, int>> v;
        for (int i=0; i<4; i++) {
            int x, y;
            cin >> x >> y;
            v.push_back({x, y});
        }
        sort(v.begin(), v.end());
        cout << (v[1].second - v[0].second) * (v[1].second - v[0].second) << '\n';
    }
    return 0;
}