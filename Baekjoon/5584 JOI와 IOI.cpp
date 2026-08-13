#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    string s; cin >> s;

    int one = 0, two = 0;
    for (int i=0; i<s.size()-2; i++) {
        string temp = s.substr(i, 3);
        if (temp == "JOI") one++;
        if (temp == "IOI") two++;
    }

    cout << one << '\n' << two;
    return 0;
}