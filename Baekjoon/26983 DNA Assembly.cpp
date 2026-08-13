#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

vector <string> v(7);
int main() {
    fio();
    int N; cin >> N;

    int ans = 0;
    for (int i=0; i<N; i++) {
        cin >> v[i];
        ans += v[i].size();
    }

    vector <int> idx;
    for (int i=0; i<N; i++) {
        idx.push_back(i);
    }

    do {
        string now = "";
        for (int i=0; i<idx.size(); i++) {
            if (now == "") now = v[idx[i]];
            else {
                string next = v[idx[i]];
                string temp1 = "";
                string temp2 = "";

                int nowsize = now.size();
                int nextsize = next.size();
                int mini = min(nowsize, nextsize);

                for (int i=mini; i>=1; i--) {
                    temp1 = now.substr(nowsize-i, i);
                    temp2 = next.substr(0, i);

                    if (temp1 == temp2) {
                        now += next.substr(i, nextsize-i);
                        break;
                    }
                    if (i == 1) now += next;
                }
            }
        }

        ans = min(ans, (int)now.size());
    } while (next_permutation(idx.begin(), idx.end()));

    cout << ans;
    return 0;
}