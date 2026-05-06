#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int N; string a;
    cin >> N >> a;

    vector <vector<string>> v(81);
    for (int i=0; i<N; i++) {
        string ss; cin >> ss;
        v[ss.size()].push_back(ss);
    }

    queue <string> q;
    q.push(a);

    for (int i=4; i<=80; i++) {
        int qsize = q.size();

        cout << i << ':'; cout << qsize << ' ';
        for (auto s: v[i]) cout << s << ' '; cout << endl;

        while (qsize--) {
            string f = q.front(); q.pop();
            for (auto s:v[i]) {
                if (s.substr(0, f.size()) == f || s.substr(1, f.size()) == f) {
                    q.push(s);
                    break;
                }
                for (int j=1; j<i-1; j++) {
                    string t = s.substr(0, j) + s.substr(j+1, i-j);
                    if (t == f) {
                        q.push(s);
                        break;
                    }
                }
            }
            if (qsize == 0 && q.size() == 0) {
                cout << f;
                return 0;
            }
        }
    }
    return 0;
}