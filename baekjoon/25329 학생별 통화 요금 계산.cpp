#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int N; cin >> N;

    map <string, int> m;
    for (int i=0; i<N; i++) {
        string t, n; cin >> t >> n;
        int time = stoi(t.substr(0,2)) * 60 + stoi(t.substr(3, 2));
        m[n] += time;
    }

    vector <pair<int, string>> v;
    for (auto x:m) {
        auto [name, time] = x;

        int add = (time - 100) / 50;
        if ((time - 100) % 50) add++;

        int price;
        if (time <= 100) price = 10; 
        else price = 10 + 3 * add;

        v.push_back({-price, name});
    }

    sort(v.begin(), v.end());

    for (auto [price, name]:v) {
        cout << name << ' ' << -price << '\n';
    }
    return 0;
}