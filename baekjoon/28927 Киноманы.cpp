#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int a, b, c;
    cin >> a >> b >> c;

    int time1 = 3*a + b*20 + c*120;

    cin >> a >> b >> c;
    int time2 = 3*a + b*20 + c*120;

    
    if (time1 == time2) cout << "Draw";
    else if (time1 > time2) cout << "Max";
    else cout << "Mel";
    
    return 0;
}