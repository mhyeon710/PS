#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

map <string, string> m;
int main() {
    fio();
    m["CU"] = "see you";
    m[":-)"] = "I’m happy";
    m[":-("] = "I’m unhappy";
    m[";-)"] = "wink";
    m[":-P"] = "stick out my tongue";
    m["(~.~)"] = "sleepy";
    m["TA"] = "totally awesome";
    m["CCC"] = "Canadian Computing Competition";
    m["CUZ"] = "because";
    m["TY"] = "thank-you";
    m["YW"] = "you’re welcome";
    m["TTYL"] = "talk to you later";

    while (1) {
        string s; cin >> s;

        if (m.find(s) != m.end())
            cout << m[s] << '\n';
        else
            cout << s << '\n';

        if (s == "TTYL") break;
    }
    return 0;
}