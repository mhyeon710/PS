#include <bits/stdc++.h>
#define pii pair<int, int>
#define ll long long
#define fio() cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int T, n;
    cin >> T;

    while(T--){
        cin >> n;
        
        int ans = 1e7;
        pair<int ,int> pp = {0, 0};
        int M = -1;

        int k = (int)sqrt(n);

        int lim = k*k;
        for(int i = lim; i <= n; i++){
            int dd = (int)sqrt(i);
            for(int j=dd; j>0; j--){
                if(i % j == 0){
                    int tmp = j + i / j + n - i;
                    if(ans > tmp){
                        ans = tmp;
                        M = i;
                        pp = {j, i/j};
                    }
                    break;
                }
            }
        }


        cout << ans + 1<< '\n';
        cout << "F";
        for(int i=0; i<pp.second; i++)   cout << "F";
        for(int i=0; i<pp.first; i++) cout << "T";
        for(int i=0; i<n-M; i++) cout << "T";
        cout << '\n';
        for(int i=1; i<=pp.first + pp.second; i++) cout << "1 " << i+1 << '\n';
        for(int i=1; i<=n-M; i++) cout << "2 " << pp.first + pp.second + i+1 << '\n';
    }
    return 0;
}