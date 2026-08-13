#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, t;
    cin >> a >> t;
    double result = abs(a * a - t * t);
    cout << round(result) << endl;
    return 0;
}