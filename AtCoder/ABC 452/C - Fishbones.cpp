#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

vector <string> v;
vector <pii> arr;
bool ex[11][11][26];
int main() {
    fio();
    int N, M;
    
    cin >> N;
    for (int i=0; i<N; i++) {
        int a, b;
        cin >> a >> b;
        arr.push_back({a, b});
    }

    cin >> M;
    for (int i=0; i<M; i++) {
        string s;
        cin >> s;
        v.push_back(s);
        for (int j=0; j<s.size(); j++) {
            ex[s.size()][j][s[j] - 'a'] = 1;
            // cout << s.size() << ' ' << j << ' ' << s[j] << endl;
        }
        // cout << endl;
    }

    for (int i=0; i<M; i++) {
        if (v[i].size() != N) {
            cout << "No\n";
            continue;
        }

        string s = v[i];
        for (int j=0; j<N; j++) {
            auto [a, b] = arr[j];
            // cout << a << ' ' << b << ' ' << s[j] << endl;
            if (ex[a][b-1][s[j]-'a'] == false) {
                cout << "No\n";
                break;
            }

            if (j == N-1) cout << "Yes\n";
        }
    }
    return 0;
}