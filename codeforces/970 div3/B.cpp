#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <vector>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;
 
int main() {
    fio();
    int T; cin >> T;
    while (T--) {
        int N; cin >> N;
        string s; cin >> s;
 
        int div = 0;
        bool check = false;
        for (int i=2; i<=500; i++) {
            if (i*i == N) {
                check = true;
                div = i;
                break;
            }
        }
 
        if (!check) {
            cout << "No\n";
            continue;
        }
 
        check = true;
        for (int i=0; i<div; i++) {
            for (int j=0; j<div; j++) {
                if (i == 0 || i == div-1) {
                    if (s[i*div + j] != '1') check = 0;
                }
                else {
                    if (j == 0 || j == div-1) {
                        if (s[i*div + j] != '1') check = 0;
                    }
                    else {
                        if (s[i*div + j] != '0') check = 0;
                    }
                }
            }
        }
 
        if (check) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}