#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
int dxx[4] = {1, 1, -1, -1};
int dyy[4] = {1, -1, 1, -1};

int main() {
    cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false);

    int T; cin >> T;
    for (int t=1; t<=T; t++) {
        int N, M;
        cin >> N >> M;

        int arr[15][15];
        for (int i=0; i<N; i++) {
            for (int j=0; j<N; j++) {
                cin >> arr[i][j];
            }
        }

        int ans = 0;
        int plus = 0;
        for (int i=0; i<N; i++) {
            for (int j=0; j<N; j++) {

                // cout << "!!!!!!" << i << ' ' << j << '\n';
                int temp1 = arr[i][j];
                for (int a=1; a<M; a++) {
                    for (int b=0; b<4; b++) {
                        int nx = i+a*dx[b];
                        int ny = j+a*dy[b];
                        if (nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
                        // cout << nx << ' ' << ny << '\n';
                        temp1 += arr[nx][ny];
                    }
                }
                ans = max(ans, temp1);

                int temp2 = arr[i][j];
                for (int a=1; a<M; a++) {
                    for (int b=0; b<4; b++) {
                        int nx = i+a*dxx[b];
                        int ny = j+a*dyy[b];
                        if (nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
                        // cout << nx << ' ' << ny << '\n';
                        temp2 += arr[nx][ny];
                    }
                }
                ans = max(ans, temp2);
                // cout << temp1 << ' ' << temp2 << '\n';
            }
        }

        cout << "#" << t << ' ' << ans << '\n';
    }

    return 0;
}