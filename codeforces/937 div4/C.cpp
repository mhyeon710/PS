#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <vector>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define INF     0x7fffffff
#define LLINF   0x7f7f7f7f7f7f
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;
 
int main() {
    fio();
    int T; cin >> T;
    while (T--) {
        string s;
        cin >> s;
 
        int hour = (s[0] - '0') * 10 + (s[1] - '0');
        int minute = (s[3] - '0') * 10 + (s[4] - '0');
 
        if (!hour && !minute) {
            cout << "12:00 AM\n";
            continue;
        }
 
        string t;
        if (hour >= 12) t = "PM\n";
        else t = "AM\n";
 
        if (hour == 0) {
            cout << "12:" << s[3] << s[4] << ' ' << t;
        }
        else {
            if (hour > 12) hour -= 12;
            if (hour < 10) cout << "0";
            cout << hour << ':' << s[3] << s[4] << ' ' << t;
        }
    }
    return 0;
}