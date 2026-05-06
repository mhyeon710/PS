#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
    int T; cin >> T;
    while (T--) {
        int arr[3];
        cin >> arr[0] >> arr[1] >> arr[2];
 
        if (arr[1] == arr[2]) cout << arr[0] << '\n';
        else if (arr[0] == arr[1]) cout << arr[2] << '\n';
        else cout << arr[1] << '\n';
    }
    return 0;
}