#include <iostream>
using namespace std;

int N, p[100001];
void init    (int N)        { for (int i=1; i<=N; i++) p[i] = i; }
int  find    (int x)        { return x == p[x] ? x : p[x] = find(p[x]); }
int  isUnion (int x, int y) { x = find(x); y = find(y); return x == y; }
void Union   (int x, int y) { x = find(x); y = find(y); x > y ? p[x] = y : p[y] = x; }

int main() {
    cin.tie(0), cout.tie(0);
    ios_base::sync_with_stdio(false);

    int N = 100000;
    for (int i=1; i<=N; i++) p[i] = i;

    return 0;
}