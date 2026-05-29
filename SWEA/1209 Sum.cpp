#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    for (int T=1; T<=10; T++) {
        int tc; cin >> tc;

        int arr[100][100];
        for (int i=0; i<100; i++) {
            for (int j=0; j<100; j++) {
                cin >> arr[i][j];
            }
        }

        int maxi = 0;
        for (int i=0; i<100; i++) {
            int cnt = 0;
            for (int j=0; j<100; j++) {
                cnt += arr[i][j];
            }
            maxi = max(maxi, cnt);
        }

        for (int j=0; j<100; j++) {
            int cnt = 0;
            for (int i=0; i<100; i++) {
                cnt += arr[i][j];
            }
            maxi = max(maxi, cnt);
        }

        int cnt = 0;
        for (int i=0, j=0; i<100, j<100; i++, j++) {
            cnt += arr[i][j];
        }
        maxi = max(maxi, cnt);

        cnt = 0;
        for (int i=99, j=0; i>=0, j<100; i--, j++) {
            cnt += arr[i][j];
        }
        maxi = max(maxi, cnt);
        
        cout << "#" << T << " " << maxi << '\n';
    }
    return 0;
}