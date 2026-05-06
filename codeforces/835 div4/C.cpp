#include <iostream>
#include <algorithm>
using namespace std;
 
void fio() { cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(false); }
 
int arr[200000];
int sor[200000];
int main() {
    fio();
    int T; cin >> T;
    while (T--) {
        int N; cin >> N;
        for (int i=0; i<N; i++) {
            int x; cin >> x;
            arr[i] = x;
            sor[i] = x;
        }
        
        sort(sor, sor+N);
        int maxi = sor[N-1];
        int second = sor[N-2];
        for (int i=0; i<N; i++) {
            if (arr[i] != maxi)
                cout << arr[i]-maxi << ' ';
            else 
                cout << arr[i]-second << ' ';
        }
        cout << '\n';
    }
    return 0;
}