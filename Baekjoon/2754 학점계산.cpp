#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    string s; cin >> s;
    if (s == "A+") cout << "4.3";
    if (s == "A0") cout << "4.0";
    if (s == "A-") cout << "3.7";
    if (s == "B+") cout << "3.3";
    if (s == "B0") cout << "3.0";
    if (s == "B-") cout << "2.7";
    if (s == "C+") cout << "2.3";
    if (s == "C0") cout << "2.0";
    if (s == "C-") cout << "1.7";
    if (s == "D+") cout << "1.3";
    if (s == "D0") cout << "1.0";
    if (s == "D-") cout << "0.7";
    if (s == "F") cout << "0.0";
    
    return 0;
}