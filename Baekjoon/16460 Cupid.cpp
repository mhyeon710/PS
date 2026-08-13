#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    string name, ls;
    int dist; 
    cin >> name >> ls >> dist;

    vector <string> v;
    int N; cin >> N;
    for (int i=0; i<N; i++) {
        string n, l;
        int d;
        cin >> n >> l >> d;

        if (ls == "FM" || ls == "MF") {
            if (d <= dist)
                v.push_back(n);

        } else if (ls == "F") {
            if (l == "F" && d <= dist)
                v.push_back(n);
        } else {
            if (l == "M" && d <= dist)
                v.push_back(n);
        }
    }

    if (v.empty()) cout << "No one yet";
    else {
        sort(v.begin(), v.end());
        for (auto s: v) cout << s << '\n';
    }
    return 0;
}