#include <bits/stdc++.h>
#define ll      long long
#define pci     pair<char, int>
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    char a; int b;
    cin >> a >> b;

    pci knight = {a, b};

    if (knight == make_pair('a', 1)) cout << "b1\nh8";
    else if (knight == make_pair('a', 8)) cout << "a7\nh1";
    else if (knight == make_pair('h', 1)) cout << "g1\na8";
    else if (knight == make_pair('h', 8)) cout << "h7\na1";
    else if (a == 'a') {
        cout << "a" << b-1 << '\n' << "b" << b+1;
    } else if (a == 'h') {
        cout << "h" << b-1 << '\n' << "g" << b+1;
    } else if (b == 1) {
        cout << (char)(a-1) << b << '\n' << (char)(a+1) << 2;
    } else if (b == 8) {
        cout << (char)(a-1) << b << '\n' << (char)(a+1) << 7;
    } else {
        cout << (char)(a-1) << b << '\n' << (char)(a+1) << b+1;
    }

    return 0;
}