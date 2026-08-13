#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int arr[9][9];
int main() {
    fio();
    bool check = true;
    
    char x;
    for (int i=0; i<13; i++) cin >> x;
    for (int i=0; i<3; i++) {
        cin >> x;
        for (int j=0; j<3; j++) {
            cin >> x;
            if (x == '.') continue;
            else arr[i][j] = x-'0';
        }
        cin >> x;
        for (int j=3; j<6; j++) {
            cin >> x;
            if (x == '.') continue;
            else arr[i][j] = x-'0';
        }
        cin >> x;
        for (int j=6; j<9; j++) {
            cin >> x;
            if (x == '.') continue;
            else arr[i][j] = x-'0';
        }
        cin >> x;
    }
    for (int i=0; i<13; i++) cin >> x;
    for (int i=3; i<6; i++) {
        cin >> x;
        for (int j=0; j<3; j++) {
            cin >> x;
            if (x == '.') continue;
            else arr[i][j] = x-'0';
        }
        cin >> x;
        for (int j=3; j<6; j++) {
            cin >> x;
            if (x == '.') continue;
            else arr[i][j] = x-'0';
        }
        cin >> x;
        for (int j=6; j<9; j++) {
            cin >> x;
            if (x == '.') continue;
            else arr[i][j] = x-'0';
        }
        cin >> x;
    }
    for (int i=0; i<13; i++) cin >> x;
    for (int i=6; i<9; i++) {
        cin >> x;
        for (int j=0; j<3; j++) {
            cin >> x;
            if (x == '.') continue;
            else arr[i][j] = x-'0';
        }
        cin >> x;
        for (int j=3; j<6; j++) {
            cin >> x;
            if (x == '.') continue;
            else arr[i][j] = x-'0';
        }
        cin >> x;
        for (int j=6; j<9; j++) {
            cin >> x;
            if (x == '.') continue;
            else arr[i][j] = x-'0';
        }
        cin >> x;
    }
    for (int i=0; i<13; i++) cin >> x;

    for (int i=0; i<9; i++) {
        vector <int> r(10, 0);
        for (int j=0; j<9; j++)
            r[arr[i][j]]++;
        for (int j=1; j<=9; j++) 
            if (r[j] >= 2)
                check = false;
    }

    for (int j=0; j<9; j++) {
        vector <int> r(10, 0);
        for (int i=0; i<9; i++)
            r[arr[i][j]]++;
        for (int i=1; i<=9; i++) {
            if (r[i] >= 2)
                check = false;
        }
    }

    for (int i=0; i<9; i+=3) {
        for (int j=0; j<9; j+=3) {
            vector <int> r(10, 0);
            for (int a=0; a<3; a++) {
                for (int b=0; b<3; b++) {
                    r[arr[i+a][j+b]]++;
                }
            }
            for (int i=1; i<=9; i++) {
                if (r[i]>=2)
                    check = false;
            }
        }
    }

    if (check) cout << "OK";
    else cout << "GRESKA";
    return 0;
}