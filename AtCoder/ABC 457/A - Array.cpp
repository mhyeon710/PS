#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    int N; cin >> N;

    vector <int> v(N+1);
    for (int i=1; i<=N; i++) {
        cin >> v[i];
    }

    int x; cin >> x;
    cout << v[x];
    return 0;
}