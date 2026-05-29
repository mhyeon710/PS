#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    string s; cin >> s;
    cout << (s.size() == 5 || s.size() == 10 ? "Yes" : "No");
    return 0;
}