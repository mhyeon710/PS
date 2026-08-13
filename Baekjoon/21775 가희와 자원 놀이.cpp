#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

string s;
int N, T, id, x;
int main() {
    fio();
    cin >> N >> T;

    set <int> userNum;
    vector <int> turn(T);
    queue <array<int, 3>> q;
    vector <array<int, 3>> userCal(N+1);

    for (int i=0; i<T; i++) cin >> turn[i];
    for (int i=0; i<T; i++) {
        cin >> id >> s;

        if (s == "next") q.push({id, 1, 0});
        else {
            cin >> x;
            if (s == "acquire")      q.push({id, 2, x});
            else if (s == "release") q.push({id, 3, x});
        }
    }

    for (int i=0; i<T; i++) {
        int now = turn[i];

        if (!userCal[now][0]) {
            userCal[now] = q.front();
            q.pop();
        }

        auto [id, cal, x] = userCal[now];
        cout << id << '\n';

        if (cal == 1) {
            userCal[now] = {0, 0, 0};
        }
        
        else if (cal == 2) {
            if (userNum.find(x) == userNum.end()) {
                userNum.insert(x);
                userCal[now] = {0, 0, 0};
            }
        }

        else if (cal == 3) {
            userNum.erase(x);
            userCal[now] = {0, 0, 0};
        }
    }

    return 0;
}