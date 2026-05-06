#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    string s; cin >> s;
    if (s == "NLCS") cout << "North London Collegiate School";
    if (s == "BHA") cout << "Branksome Hall Asia";
    if (s == "KIS") cout << "Korea International School";
    if (s == "SJA") cout << "St. Johnsbury Academy";
    return 0;
}