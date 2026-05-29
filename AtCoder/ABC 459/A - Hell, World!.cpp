#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int x; cin >> x;
    string s = "HelloWorld";
    for (int i=0; i<s.size(); i++) {
        if (i == x-1) continue;
        else cout << s[i];
    }
    return 0;
}