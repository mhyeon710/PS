#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

map<int, ll> mab, mac, mbc;
map<pii, ll> m;

int main() {
    fio();
    ll N; cin >> N;
    string s; cin >> s;

    int a, b, c;
    ll ab, ac, bc, abc;

    a = b = c = 0;
    ab = ac = bc = abc;
    mab[0] = mac[0] = mbc[0] = m[{0, 0}] = 1;
    for (auto ch:s) {
        if (ch == 'A') a++;
        else if (ch == 'B') b++;
        else c++;

        ab += mab[a-b];
        mab[a-b]++;

        ac += mac[a-c];
        mac[a-c]++;

        bc += mbc[b-c];
        mbc[b-c]++;

        auto p = make_pair(a-b, a-c);
        abc += m[p];
        m[p]++;
    }

    cout << (N*(N+1)/2) - ab - ac - bc + 2*abc;
    return 0;
}

// 포함 배제 원리
// 전체 - f(a=b) - f(a=c) - f(b=c) + 3f(a=b=c) - f(a=b=c)
// Ai를 S의 맨 처음부터 i번째 글자 안까지 등장하는 A의 개수라 가정
// S의 [l+1, r]에서 A, B, A의 등장 횟수는 Ar - Al
// 따라서 f(a=b)는 Ar - Al = Br - Bl인 l,r 의 쌍의 개수. 이를 map에 저장
// f(a=b=c)는 Ar - Al = Br - Bl = Cr - Cl이므로 Ar - Br = Al - Br, Ar - Cr = Al - Cl과 동치