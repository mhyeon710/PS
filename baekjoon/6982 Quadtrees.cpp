#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int idx;
string a, b;
bool img[32][32]; // 0은 흰색, 1은 검은색
void cur(string s, int x, int y, int d) {
    idx++;
    if (s[idx] == 'e') return;
    if (s[idx] == 'f') {
        for (int i=x; i<x+d; i++) {
            for (int j=y; j<y+d; j++) {
                img[i][j] = 1;
            }
        }
        return;
    }
    cur(s, x, y+d/2, d/2);
    cur(s, x, y, d/2);
    cur(s, x+d/2, y, d/2);
    cur(s, x+d/2, y+d/2, d/2);
}

int main() {
    fio();
    int N; cin >> N;

    for (int i=0; i<N; i++) {
        cin >> a >> b;
        memset(img, 0, sizeof(img));

        idx = -1;
        cur(a, 0, 0, 32);
        
        idx = -1;
        cur(b, 0, 0, 32);
        
        int ans = 0;
        for (int i=0; i<32; i++) {
            for (int j=0; j<32; j++) {
                if (img[i][j]) ans++;
            }
        }
        cout << "There are " << ans << " black pixels.\n";
    }
    return 0;
}