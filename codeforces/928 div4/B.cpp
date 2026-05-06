#include <iostream>
#include <algorithm>
#include <string>
#define fio() cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;
 
char arr[10][10];
int main() {
    fio();
    int T; cin >> T;
    while (T--) {
        int N; cin >> N;
        for (int i=0; i<N; i++) {
            for (int j=0; j<N; j++) {
                cin >> arr[i][j];
            }
        }
        
        bool check = false;
        for (int i=0; i<N; i++) {
            for (int j=0; j<N; j++) {
                if (arr[i][j] == '1') {
                    check = true;
                    if (arr[i+1][j] == '1' && arr[i][j+1] == '1') {
                        cout << "SQUARE\n";
                        break;
                    }
                    else {
                        cout << "TRIANGLE\n";
                        break;
                    }
                }
            }
            if (check) break;
        }
    }
    return 0;
}