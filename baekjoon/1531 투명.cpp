#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int pic[101][101];
int main() {
    fio();
    int N, M;
    cin >> N >> M;

    for (int i=0; i<N; i++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
    
        for (int a=x1; a<=x2; a++) {
            for (int b=y1; b<=y2; b++) {
                pic[a][b]++;
            }
        }
    }

    int ans = 0;
    for (int i=1; i<=100; i++) {
        for (int j=1; j<=100; j++) {
            if (pic[i][j] > M)
                ans++;
        }
    }
    
    cout << ans;
    return 0;
}