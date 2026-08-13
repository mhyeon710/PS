#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

int main() {
    cin.tie(0), cout.tie(0);
    ios_base::sync_with_stdio(false);
    
    int N, K1, K2;
    cin >> N >> K1 >> K2;

    vector <pair<int, int>> student; // pos, school
    vector <int> pos;
    vector <vector<int>> school(N+1);
    for (int i=0; i<N; i++) {
        int x, s;
        cin >> x >> s;

        student.push_back({x, s});
        pos.push_back(x);
        school[s].push_back(x);
    }

    sort(pos.begin(), pos.end());
    for (int i=1; i<=N; i++) {
        sort(school[i].begin(), school[i].end());
    }

    for (int i=0; i<N; i++) {
        auto [p, s] = student[i];
        int A = upper_bound(school[s].begin(), school[s].end(), p+K1) - lower_bound(school[s].begin(), school[s].end(), p-K1) - 1;
        int B = upper_bound(school[s].begin(), school[s].end(), p+K2) - lower_bound(school[s].begin(), school[s].end(), p-K2) - 1;
        int D = upper_bound(pos.begin(), pos.end(), p+K2) - lower_bound(pos.begin(), pos.end(), p-K2) - 1;
        cout << A + D - B << ' ';
    }

    return 0;
}

// N개의 집, i번 학생 집의 좌표는 Xi, Si번 학교 다님.
// 두 학생이 서로 같은 학교, 두 학생의 집 사이 거리 K1 이하
// 두 학생이 서로 다른 학교, 두 학생의 집 사이 거리 K2 이하
// 같은 학교, 다른 학교를 분리해서 lower_bound 사용
// 다른 학교를 전부 만드는 것은 시복,공복 모두 말도 안됨
// 같은 학교에 다니면서 K1 인 사람 = A
// 같은 학교에 다니면서 K2 인 사람 = B = A + A' (같은 학교에 다니면서 diff가 K2와 K1 사이인 사람)
// 모든 학생 중에 K2인 사람 = D
// 다른 학교 중에 K2인 사람 = D - A - A' = D - B
// A + D - B;
// 따라서 각 친구마다 A, B, D 구하기;
// 전체 posance vector
// 각 school 별로 posance vector


// upper_bound : x 초과 첫 원소 인덱스
// lower_bound : x 이상 첫 원소 인덱스
// [a, b] 개수 : upper_bound(b) - lower_bound(a);