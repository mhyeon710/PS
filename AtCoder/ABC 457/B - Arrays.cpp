#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    int N; cin >> N;

    vector <vector<int>> v(N);
    
    for (int i=0; i<N; i++) {
        int L;
        cin >> L;

        for (int j=1; j<=L; j++) {
            int x; cin >> x;
            v[i].push_back(x);
        }
    }

    int X, Y;
    cin >> X >> Y;
    cout << v[X-1][Y-1];
    return 0;
}