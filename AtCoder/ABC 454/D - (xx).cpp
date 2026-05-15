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
    int T; cin >> T;
    while (T--) {
        string a, b;
        cin >> a >> b;

        vector <char> va, vb;
        for (auto c: a) {
            if (c == ')' && va.size() >= 3) {
                int vsize = va.size();
                if (va[vsize-1] == 'x' && va[vsize-2] == 'x' && va[vsize-3] == '(') {
                    va.pop_back();
                    va.pop_back();
                    va.pop_back();
                    va.push_back('x');
                    va.push_back('x');
                } else {
                    va.push_back(c);
                }
            } else {
                va.push_back(c);
            }
        }
        for (auto c: b) {
            if (c == ')' && vb.size() >= 3) {
                int vsize = vb.size();
                if (vb[vsize-1] == 'x' && vb[vsize-2] == 'x' && vb[vsize-3] == '(') {
                    vb.pop_back();
                    vb.pop_back();
                    vb.pop_back();
                    vb.push_back('x');
                    vb.push_back('x');
                } else {
                    vb.push_back(c);
                }
            } else {
                vb.push_back(c);
            }
        }

        bool can = true;
        if (va.size() != vb.size()) can = false;


        // for (auto c:va) cout << c; cout << endl;
        // for (auto c:vb) cout << c; cout << endl << endl;

        if (can) {
            for (int i=0; i<va.size(); i++) {
                if (va[i] != vb[i]) {
                    can = false;
                    break;
                }
            }
        }

        cout << (can ? "Yes\n" : "No\n");
    }
    return 0;
}