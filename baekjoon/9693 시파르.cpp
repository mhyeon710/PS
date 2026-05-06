#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();

    int cnt = 1;
    while (1) {
        int x;
        cin >> x;
        if (!x) break;
        
        int two = 0, five = 0;
        for (int i=1; i<=x; i++) {
            int temp = i;
            while (1) {
                if (temp%10 == 0) {
                    two++; five++;
                } else break;
                temp /= 10;
            }
            while (1) {
                if (temp%2 == 0) two++;
                else break;
                temp /= 2;
            }
            while (1) {
                if (temp%5 == 0) five++;
                else break;
                temp /= 5;
            }
        }
        cout << "Case #" << cnt << ": " << min(two, five) << '\n';
        cnt++;
    }
    return 0;
}