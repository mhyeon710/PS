#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

char arr[100][100];
int main() {
    fio();
    int T; cin >> T;
    while (T--) {

        for (int i=0; i<100; i++) {
            for (int j=0; j<100; j++) {
                arr[i][j] = 'a';
            }
        }
        int a, b, c;
        cin >> a >> b >> c;

        int l = 2*a+1 + 2*b;
        int h = 2*c+1 + 2*b;

        for (int i=0; i<2*b; i++) {
            for (int j=0; j<2*b; j++) {
                if (i+j<2*b)
                    arr[i][j] = '.';
            }
        }

        for (int i=0; i<h; i++) {
            for (int j=max(0, 2*b-i); j<max(0, 2*b-i) + 2*a+1; j++) {

                if (i%2==0) {
                    if (j%2==0) arr[i][j] = '+';
                    else arr[i][j] = '-';
                } else {
                    if (i<2*b) {
                        if (j%2) arr[i][j] = '/';
                        else arr[i][j] = '.';
                    } else {
                        if (j%2==0) arr[i][j] = '|';
                        else arr[i][j] = '.';
                    }
                }
                
            }
        }
        
        for (int i=2*c+1, p=1; i<h, p<=2*b; i++, p++) {
            for (int j=l-p; j<l; j++) {
                arr[i][j] = '.';
            }
        }
        
        for (int i=0; i<h; i+=2) {
            for (int j=0; j<l; j++) {
                if (arr[i][j] == 'a') {
                    if (j%2==0) arr[i][j] = '+';
                    else arr[i][j] = '.';
                }
            }
        }

        for (int i=1; i<h; i+=2) {
            for (int j=0; j<l; j++) {
                if (arr[i][j] == 'a') {
                    if (j%2==0) arr[i][j] = '|';
                    else arr[i][j] = '/';
                }
            }
        }

        for (int i=0; i<h; i++) {
            for (int j=0; j<l; j++) 
                cout << arr[i][j];
            cout << '\n';
        }
    }
    return 0;
}