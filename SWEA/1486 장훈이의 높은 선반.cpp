#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

int main() {
    cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false);

    int T; cin >> T;
    for (int t=1; t<=T; t++) {
        int N, B;
        cin >> N >> B;

        vector <int> v(N);
        for (int i=0; i<N; i++) cin >> v[i];

        sort(v.begin(), v.end());

        set <int> s;
        s.insert(v[0]);
        for (int i=1; i<N; i++) {

            vector <int> temp;
            temp.push_back(v[i]);
            for (auto x:s) temp.push_back(x+v[i]);
            for (auto x:temp) s.insert(x);
        }
        int ans = 0;

        for (auto x:s) {
            if (x >= B) {
                ans = x;
                break;
            }
        }
        cout << "#" << t << ' ' << ans-B << '\n';

    }

    return 0;
}