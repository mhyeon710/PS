#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    string s;
    while (1) {
        cin >> s;
        if (s == "animal") cout << "Panthera tigris\n";
        if (s == "flower") cout << "Forsythia koreana\n";
        if (s == "tree") cout << "Pinus densiflora\n";
        if (s == "end") break;
    }
    return 0;
}