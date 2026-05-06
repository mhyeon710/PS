#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();

    long double ang1, ang2;
    for (int t=0; t<2; t++) {
        string s; cin >> s;
        
        int zero = s.size()-1;
        int one = s.size()-2;

        long double ang;
        if (s[zero] == 'N') ang = 0;
        if (s[zero] == 'E') ang = 90;
        if (s[zero] == 'S') ang = 180;
        if (s[zero] == 'W') ang = 270;
        
        if (s.size() >= 2) {
            if (s[one] == 'N' && s[zero] == 'E') ang = 45;
            if (s[one] == 'S' && s[zero] == 'E') ang = 135;
            if (s[one] == 'S' && s[zero] == 'W') ang = 225;
            if (s[one] == 'N' && s[zero] == 'W') ang = 315;
        }
        
        if (s.size() >= 3) {
            long double now = 22.5;
            for (int i=s.size()-3; i>=0; i--) {
                if (s[i] == 'N' && s[one] == 'N' && s[zero] == 'E') ang -= now;
                if (s[i] == 'E' && s[one] == 'N' && s[zero] == 'E') ang += now;
                if (s[i] == 'E' && s[one] == 'S' && s[zero] == 'E') ang -= now;
                if (s[i] == 'S' && s[one] == 'S' && s[zero] == 'E') ang += now;
                if (s[i] == 'S' && s[one] == 'S' && s[zero] == 'W') ang -= now;
                if (s[i] == 'W' && s[one] == 'S' && s[zero] == 'W') ang += now;
                if (s[i] == 'W' && s[one] == 'N' && s[zero] == 'W') ang -= now;
                if (s[i] == 'N' && s[one] == 'N' && s[zero] == 'W') ang += now;
                now /= 2;
            }
        }

        if (t == 0) ang1 = ang;
        if (t == 1) ang2 = ang;
    }

    cout << fixed;
    cout.precision(12);
    
    cout << min(abs(ang1 - ang2), 360.0 - abs(ang1 - ang2));
    return 0;
}