#include <iostream>
#include <vector>
#include <algorithm>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int L, R;
    cin >> L >> R;
    cout << R-L+1;  
    return 0;
}