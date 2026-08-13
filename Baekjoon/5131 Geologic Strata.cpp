#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int X[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int Y[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

int main() {
    fio();
    int T; cin >> T;

    vector <int> v(14);
    v[1] = 4;
    v[2] = 24;
    v[3] = 67;
    v[4] = 147;
    v[5] = 201;
    v[6] = 252;
    v[7] = 300;
    v[8] = 360;
    v[9] = 417;
    v[10] = 445;
    v[11] = 489;
    v[12] = 543;
    v[13] = 3001;

    for (int c=1; c<=T; c++) {
        int t, w, d;
        cin >> t >> w >> d;

        char arr[d][w];
        for (int i=0; i<d; i++) {
            for (int j=0; j<w; j++) {
                cin >> arr[i][j];
            }
        }

        int base;
        for (int i=0; i<13; i++) {
            if (v[i] <= t && t < v[i+1]) {
                base = i;
                break;
            }
        }

        bool can = true;
        for (int i=0; i<d; i++) {
            for (int j=0; j<w; j++) {
                if ('A' <= arr[i][j] && arr[i][j] <= 'M') {
                    int time = 9;
                    for (int k=0; k<8; k++) {
                        int nx = i + X[k];
                        int ny = j + Y[k];
                        if (nx < 0 || nx >= d || ny < 0 || ny >= w) continue;
                        if ('0' <= arr[nx][ny] && arr[nx][ny] <= '9') {
                            time = min(time, arr[nx][ny] - '0');
                        }
                    }
                    if (time + base + 'A' != arr[i][j]) {
                        can = false;
                        break;
                    }
                }
                if (!can) break;
            }
            if (!can) break;
        }
        
        cout << "Data Set " << c << ":\n";
        if (can) cout << "Yes\n\n";
        else cout << "No\n\n";
    }
    return 0;
}