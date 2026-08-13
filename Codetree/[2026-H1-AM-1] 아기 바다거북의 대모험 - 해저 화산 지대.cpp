#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <array>
#include <cstring>
#define pii pair<int, int>
using namespace std;

// 우, 하, 좌, 상 순서
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

int main() {
    // Please write your code here.
    cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false);

    int N, M, P;
    cin >> N >> M >> P;

    int arr[N][N];                  // 산호초 및 화석 위치
    vector <int> ans(M, -1);        // 바다거북 탈출 시간
    vector <pii> pos(M);            // 바다거북 위치
    vector <array<int, 4>> vol(P);  // 화산 위치 및 압력 임계치 및 압력 현재치

    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {        
            cin >> arr[i][j];
        }
    }
    for (int i=0; i<M; i++) {
        cin >> pos[i].first >> pos[i].second;
    }
    for (int i=0; i<P; i++) {
        cin >> vol[i][0] >> vol[i][1] >> vol[i][2];
    }

    // ### 구현 전, 시간복잡도 계산
    // 총 100초 진행
    // 1초 당 한개의 거북이는 400개의 칸 탐색
        // 즉, 바다거북 이동에 한번당 최대 400*10
        // 화산 압력 층가에는 최대 10
        // 화산 분출에는 최대 10개 모두 분출 * 각 화산 당 상하좌우 탐색 20+20 = 400
        // 바다거북 생존 여부는 10
        // 환경 초기화는 열 배열 따로 관리 및 맨 처음 배열 선언에 400
    // 즉, 실제 시뮬레이션 최대 시간 복잡도는 100 * (400 + 4000 + 10 + 400 + 10) = 100 * (4820) * 482000
    // 그냥 각 반응을 충실히, 적절한 방법으로 구현한 완전 탐색 시뮬레이션 문제로 해결 가능
    for (int time=1; time<=100; time++) {
        
        // 바다거북 이동
        for (int i=0; i<M; i++) {
            auto [x, y] = pos[i];

            // 안식처인 거북이 혹은 화석화된 거북이는 이동 패스
            if (x == -1 && y == -1) continue;

            // 살아있는 거북이 장애물화
            for (int j=0; j<M; j++) {
                if (pos[j].first == -1 && pos[j].second == -1) continue;
                arr[pos[j].first][pos[j].second] = 1;
            }

            queue <pii> q;
            int cnt[N][N];
            for (int i=0; i<N; i++) {
                for (int j=0; j<N; j++) {
                    cnt[i][j] = 1000;
                }
            }
            
            // 안식처로부터 각 바다거북까지 얼마나 걸리는지 탐색
            q.push({N-1, N-1});
            cnt[N-1][N-1] = 0;
            
            while (!q.empty()) {
                auto [fx, fy] = q.front();
                q.pop();
                
                // 현재 거북이 위치나, 산호초가 있으면 더 이상 큐에 집어넣지 않고 컨티뉴.
                // 맵 전체를 채울때까지 반복(그냥, 혹시 모르니까)
                for (int d=0; d<4; d++) {
                    int nx = fx + dx[d];
                    int ny = fy + dy[d];
                    if (nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
                    if (arr[nx][ny] > 0) continue;
                    if (cnt[nx][ny] != 1000) continue;
                    if (nx == x && ny == y) continue;

                    cnt[nx][ny] = cnt[fx][fy] + 1;
                    q.push({nx, ny});
                }
            }

            // for (int a=0; a<N; a++) {
            //     for (int b=0; b<N; b++) {
            //         cout << cnt[a][b] << ' ';
            //     }
            //     cout << endl;
            // }

            // 살아있는 거북이 장애물화 원복
            for (int j=0; j<M; j++) {
                if (pos[j].first == -1 && pos[j].second == -1) continue;
                arr[pos[j].first][pos[j].second] = 0;
            }

            // 거북이는 상화좌우 중에서, 칸이 제일 작은 방향으로 이동.
            int mini = 1000;
            int mx,  my;
            for (int d=0; d<4; d++) {
                int nx = x + dx[d];
                int ny = y + dy[d];
                if (nx < 0 || nx >= N || ny < 0 || ny >= N) continue;

                if (mini > cnt[nx][ny]) {
                    mini = cnt[nx][ny];
                    mx = nx;
                    my = ny;
                }
            }

            // 4칸 모두 초기화 값이면 이동하지 않음
            if (mini == 1000) continue;
            
            // 거북이 이동 (값 실제 반영)
            pos[i].first = mx;
            pos[i].second = my;

            // 이동해 보니 안식처이면
            if (pos[i].first == N-1 && pos[i].second == N-1) {
                // 도착 시각 기록 및 거북이 무시
                ans[i] = time;
                pos[i].first = -1;
                pos[i].second = -1;
            }
        }

        // 화산 압력 증가
        for (int i=0; i<P; i++) {
            vol[i][3] += 10;
        }
        // 화산 분출 및 연쇄 반응
        // 열기 정보 세팅 및 환경 초기화
        int heat[N][N];
        memset(heat, 0, sizeof(heat));
        
        // 폭발한 화산 큐
        queue <int> q;
        bool boomed[P];
        memset(boomed, 0, sizeof(boomed));

        // 처음에 임계치를 초과한 화산 큐에 누적 및 폭발한 화산 압력 초기화
        for (int i=0; i<P; i++) {
            if (vol[i][2] <= vol[i][3]) {
                q.push(i);
                vol[i][3] = 0;
            }
        }

        // cout << "time : " << time << ", qsize : " << q.size() << endl;

        while (!q.empty()) {
            auto idx = q.front();
            boomed[idx] = 1;
            q.pop();

            // 폭발 화산 정보
            auto [vx, vy, now_heat, heating] = vol[idx];
            // cout << "vol : " << idx << " / " << vx << ' ' << vy << ' ' << now_heat << endl;

            // 열기 전파
            heat[vx][vy] += now_heat;
            for (int d=0; d<4; d++) {
                // cout << "d : " << d << endl;
                int temp_heat = now_heat;
                int tx = vx;
                int ty = vy;

                while (1) {
                    tx += dx[d];
                    ty += dy[d];

                    if (tx < 0 || tx >= N || ty < 0 || ty >= N) break;
                    if (arr[tx][ty] == 1) break;


                    temp_heat /= 2;
                    if (temp_heat == 0) break;

                    // cout << tx << ' ' << ty << ' ' << temp_heat << endl;
                    heat[tx][ty] += temp_heat;
                }
            }

            // 연쇄 반응 및 압력 초기화
            for (int i=0; i<P; i++) {
                if (boomed[i]) continue;

                auto [vx, vy, maxi, now] = vol[i];

                // 외부 열기 + 현재 화산 압력 >= 화산 압력 임계치
                if (heat[vx][vy] + now >= maxi) {
                    q.push(i);
                    vol[i][3] = 0;
                }
            }
        }

        // for (int i=0; i<N; i++) {
        //     for (int j=0; j<N; j++) {
        //         cout << heat[i][j] << ' ';
        //     }
        //     cout << endl;
        // }

        // 바다거북 화석화 (...)
        for (int i=0; i<M; i++) {
            auto [x, y] = pos[i];
            
            // 안식처 또는 화석인 거북이는 패스
            if (x == -1 && y == -1) continue;
            
            // 열기가 20이 넘으면 꾸엑
            if (heat[x][y] >= 20) {
                // 거북이 무시
                pos[i].first = -1;
                pos[i].second = -1;

                // 맵에도 거북이 표시
                arr[x][y] = 2;
            }
        }

        // cout << "time end position " << time << endl;
        // for (int i=0; i<M; i++) {
        //     cout << pos[i].first << ' ' << pos[i].second << endl;
        // }
    }

    // 정답 출력
    for (int i=0; i<M; i++) {
        cout << ans[i] << '\n';
    }
    return 0;
}


