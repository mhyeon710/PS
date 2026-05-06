#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int N; cin >> N;

    if (N == 1) {
        cout << "1\n1";
        return 0;
    }

    if (N % 4==0) {
        deque<int> arr1;
        deque<int> arr2;
        for(int i=1;i<=N/4;i++){
            arr1.push_front(i*4-2);
            arr1.push_front(i*4);
            arr1.push_back(i*4-1);
            arr1.push_back(i*4-2);
        }
        for(int i=1;i<=N/4;i++){
            arr2.push_front(i*4-3);
            arr2.push_front(i*4-1);
            arr2.push_back(i*4-3);
            arr2.push_back(i*4);
        }
        while (!arr1.empty()) {
            cout << arr1.front() << ' '; arr1.pop_front();
        }
        cout << '\n';
        while (!arr2.empty()) {
            cout << arr2.front() << ' '; arr2.pop_front();
        }
        
    }else if (N % 4==1) {
        deque<int> arr1;
        deque<int> arr2;
        arr1.push_front(1);
        arr2.push_front(1);
        for(int i=1;i<=N/4;i++){
            arr1.push_front(i*4-2+1);
            arr1.push_front(i*4+1);
            arr1.push_back(i*4-1+1);
            arr1.push_back(i*4-2+1);
        }
        for(int i=1;i<=N/4;i++){
            arr2.push_front(i*4-3+1);
            arr2.push_front(i*4-1+1);
            arr2.push_back(i*4-3+1);
            arr2.push_back(i*4+1);
        }
        while (!arr1.empty()) {
            cout << arr1.front() << ' '; arr1.pop_front();
        }
        cout << '\n';
        while (!arr2.empty()) {
            cout << arr2.front() << ' '; arr2.pop_front();
        }
        
    }else {
        cout << -1;
    }

    return 0;
}