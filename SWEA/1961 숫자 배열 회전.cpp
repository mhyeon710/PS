#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    int T;
    cin >> T;

    for (int test_case=1; test_case<=T; test_case++) {
        int N; cin >> N;

        int arr[N][N], one[N][N], two[N][N], three[N][N];
        for (int i=0; i<N; i++) {
            for (int j=0; j<N; j++) {
                cin >> arr[i][j];
            }
        }

        for (int i=0; i<N; i++) {
            for (int j=0; j<N; j++) {
                one[i][j] = arr[N-1-j][i];
                two[i][j] = arr[N-1-i][N-1-j];
                three[i][j] = arr[j][N-1-i];
            }
        }

        cout << "#" << test_case << '\n';
        for (int i=0; i<N; i++) {
            for (int j=0; j<N; j++) {
                cout << one[i][j];
            }
            cout << ' ';

            for (int j=0; j<N; j++) {
                cout << two[i][j];
            }
            cout << ' ';
            for (int j=0; j<N; j++) {
                cout << three[i][j];
            }
            cout << '\n';
        }
    }
    return 0;
}