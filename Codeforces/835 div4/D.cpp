#include <iostream>
using namespace std;
 
void fio() { cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(false); }
 
int arr[200000];
int main() {
    fio();
    int T; cin >> T;
    while (T--) {
        int N; cin >> N;
        for (int i=0; i<N; i++) {
            cin >> arr[i];
        }
        
        int bs = 0;
        if (arr[1]-arr[0] > 0) bs = 1;
        else bs = -1;
 
        int as;
        int check = true;
        for (int i=1; i<N; i++) {
            int slope = arr[i] - arr[i-1];
            if (slope == 0) continue;
            if (slope > 0) as = 1;
            else as = -1;
            if (bs == 1 && as == -1) {
                check = false;
            }
            bs = as;
        }
        if (check) cout << "YES\n";
        else cout << "NO\n";
 
    }
    return 0;
}