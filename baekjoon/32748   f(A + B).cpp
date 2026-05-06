#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    vector <int> v(10);
    for (int i=0; i<10; i++) cin >> v[i];

    string a, b;
    cin >> a >> b;

    for (int i=0; i<a.size(); i++) {
        for (int j=0; j<10; j++) {
            if (v[j] == (a[i] - '0')) {
                a[i] = (char)(j + '0');
                break;
            }
        }
    } 

    for (int i=0; i<b.size(); i++) {
        for (int j=0; j<10; j++) {
            if (v[j] == (b[i] - '0')) {
                b[i] = (char)(j + '0');
                break;
            }
        }
    }
    
    // cout << a << ' ' << b << endl;

    int ia = stoi(a);
    int ib = stoi(b);

    int num = ia + ib;
    

    string s = "";
    while (num) {
        int t = num%10;
        s = char(v[t]+'0') + s;
        num/=10;
    }

    cout << s;
    return 0;
}