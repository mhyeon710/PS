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
    int H, W;
    cin >> H >> W;

    string arr[H];
    for (int i=0; i<H; i++) {
        cin >> arr[i];
    }

    int ans = 0;
    for (int h1=0; h1<H; h1++) {
        for (int h2=h1; h2<H; h2++) {
            for (int w1=0; w1<W; w1++) {
                for (int w2=w1; w2<W; w2++) {

                    bool can = true;
                    for (int i=h1; i<=h2; i++) {
                        for (int j=w1; j<=w2; j++) {
                            if (arr[i][j] != arr[h1+h2-i][w1+w2-j]) {
                                can = false;
                                break;
                            }
                        }
                        if (!can) break;
                    }

                    if (can) ans++;
                }
            }
        }
    }

    cout << ans;
    return 0;
}