#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    string s; cin >> s;

    int min = stoi(s.substr(0, 2));
    int sec = stoi(s.substr(3, 2));

    sec < 30
        ? cout << min/10 + min%10 + sec/10 + 1
        : cout << min/10 + min%10 + (sec-30)/10 + 1;

    return 0;
}