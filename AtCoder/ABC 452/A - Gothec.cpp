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
    int a, b;
    cin >> a >> b;

    if (a == 1 && b == 7 || a == 3 && b == 3 || a == 5 && b == 5 || a == 7 && b == 7 || a == 9 && b == 9) cout << "Yes\n";
    else cout << "No\n";
    return 0;
}