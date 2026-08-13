#include <iostream>
#include <algorithm>
#include <string>
#define fio() cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;
 
int main() {
    fio();
    int T; cin >> T;
    while (T--) {
        string s; cin >> s;
        int a = 0;
        int b = 0;
        for (int i=0; i<5; i++) {
            if (s[i] == 'A') a++;
            else if (s[i] == 'B') b++;
        }
        if (a > b) cout << "A\n";
        else cout << "B\n";
    }
    return 0;
}