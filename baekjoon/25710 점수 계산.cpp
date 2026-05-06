#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int N;
    cin >> N;

    vector <int> check(1000, 0);
    for (int i=0; i<N; i++) {
        int x; cin >> x;
        check[x]++;
    }

    int ans = 0;
    for (int i=1; i<1000; i++) {
        if (!check[i]) continue;
        for (int j=i; j<1000; j++) {
            if (!check[j]) continue;
            if (i == j && check[j] == 1) continue;

            int mul = i*j;
            int temp = 0;
            while (mul) {
                temp += mul%10;
                mul /= 10;
            }

            ans = max(ans, temp);
        }
    }
    
    cout << ans;
    return 0;
}