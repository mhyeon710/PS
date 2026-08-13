#include <iostream>
#include <string>
using namespace std;

int main() {
    int x; cin >> x;

    string ans;
    if (x < 425) ans = "Violet";
    else if (x < 450) ans = "Indigo";
    else if (x < 495) ans = "Blue";
    else if (x < 570) ans = "Green";
    else if (x < 590) ans = "Yellow";
    else if (x < 620) ans = "Orange";
    else ans = "Red";
    
    cout << ans;
    return 0;
}

// 빨간색: 620nm 이상 780nm 이하
// 주황색: 590nm 이상 620nm 미만
// 노란색: 570nm 이상 590nm 미만
// 초록색: 495nm 이상 570nm 미만
// 파란색: 450nm 이상 495nm 미만
// 남색: 425nm 이상 450nm 미만
// 보라색: 380nm 이상 425nm 미만
// 별의 색을 출력한다. 빨간색이면 "Red", 주황색이면 "Orange", 노란색이면 "Yellow", 초록색이면 "Green", 파란색이면 "Blue", 남색이면 "Indigo", 보라색이면 "c"을 출력한다.