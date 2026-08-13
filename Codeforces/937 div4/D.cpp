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
 
int bin[30] = {10, 11, 100, 101, 110, 111, 1000, 1001, 1010, 1011, 1100, 1101, 1110, 1111, 10000, 10001, 10010, 10011,
            10100, 10101, 10110, 10111, 11000, 11001, 11010, 11011, 11100, 11101, 11110, 11111};
 
bool check[100001];
int main() {
    fio();
 
    check[1] = 1;
    for (int i=0; i<30; i++)
        check[bin[i]] = 1;
 
    for (int i=10; i<=100000; i++) {
        if (check[i]) continue;
 
        for (int j=0; j<30; j++) {
            if (i % bin[j] == 0 && check[i/bin[j]])
                check[i] = 1;
            if (i < bin[j]) break;
        }
    }
 
    int T; cin >> T;
    while (T--) {
        int N; cin >> N;
        if (check[N]) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}