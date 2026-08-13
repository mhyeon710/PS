#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
 
int arr[50];
int main() {
    int T; cin >> T;
    while (T--) {
        int N; cin >> N;
        for (int i=0; i<N; i++)
            cin >> arr[i];
        string s; cin >> s;
 
        bool check = false;
        for (int i=0; i<N; i++) {
            if (check) break;
            
            int temp = arr[i];
            char t = s[i];
            for (int j=i+1; j<N; j++) {
                int comp = arr[j];
                if (temp == comp) {
                    if (s[i] != s[j]) {
                        check = true;
                    }
                }
            }
        }
        if (check) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}