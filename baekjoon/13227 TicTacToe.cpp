#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();

    char arr[3][3];
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            cin >> arr[i][j];
        }
    }

    bool can = false;
    for (int i=0; i<3; i++) {
        if ((arr[i][0] == 'O' || arr[i][0] == 'X') && arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2])
            can = true;
    }
    
    for (int j=0; j<3; j++) {
        if ((arr[0][j] == 'O' || arr[0][j] == 'X') && arr[0][j] == arr[1][j] && arr[1][j] == arr[2][j])
            can = true;
    }

    if ((arr[1][1] == 'O' || arr[1][1] == 'X') && arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2]) can = true;
    if ((arr[1][1] == 'O' || arr[1][1] == 'X') && arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0]) can = true;

    if (can) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}