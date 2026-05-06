#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    ll L, N;
    cin >> L >> N;
    cin.ignore();

    ll ans = -1;
    vector <pair<ll, pair<int, string>>> v;
    for (int i=0; i<N; i++) {
        string line;
        getline(cin, line);

        int pos = line.find(",");
        string name = line.substr(0, pos);
        line = line.substr(pos+1, line.size() - pos);

        pos = line.find(",");
        ll price = stoll(line.substr(0, pos));
        line = line.substr(pos+1, line.size() - pos);
        
        pos = line.find(",");
        ll c = stoll(line.substr(0, pos));
        line = line.substr(pos+1, line.size() - pos);

        pos = line.find(",");
        ll t = stoll(line.substr(0, pos));
        ll r = stoll(line.substr(pos+1, line.size() - pos));

        if ((c * t * 10080) >= L * (t + r)) {
            v.push_back({price, {i, name}});
        }
    }

    if (v.size() == 0) {
        cout << "no such mower";
        return 0;
    }

    sort(v.begin(), v.end());
    for (int i=0; i<v.size(); i++) {
        if (v[0].first == v[i].first)
            cout << v[i].second.second << '\n';
    }

    return 0;
}