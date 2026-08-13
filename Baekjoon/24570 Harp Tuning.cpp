#include <iostream>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    string s; cin >> s;

    cout << s[0];

    int i = 1;
    while (i < s.size()) {
        if (s[i] == '+') {
            cout << " tighten ";
            i++;
            continue;
        }

        if (s[i] == '-') {
            cout << " loosen ";
            i++;
            continue;
        }

        cout << s[i];
        if (i < s.size()-1 && ('0' <= s[i] && s[i] <= '9') && ('A' <= s[i+1] && s[i+1] <= 'Z')) {
            cout << '\n';
        }

        i++;
    }

    return 0;
}