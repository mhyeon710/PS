#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
#define MAX     1500000
using namespace std;

int sp[1500001];
int main() {
    fio();
    int N, k;
    cin >> N >> k;

    for (int i=1; i<=MAX; i++) sp[i] = i;
    for (int i=2; i*i<=MAX; i++) {
        if (sp[i] == i) {
            for (int j=i*i; j<=MAX; j+=i) {
                if (sp[j] == j) {
                    sp[j] = i;
                }
            }
        }
    }

    int cnt = 0;
    for (int i=2; i<=MAX; i++) {
        if (sp[i]!=i && sp[i]>N) {
            cnt++;
            if (cnt == k) {
                cout << i << "\n";
                break;
            }
        }
    }
    
    return 0;
}