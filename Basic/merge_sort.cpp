#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int arr[200000];

// 그냥 생각해서 짜 본것
vector<int> my_first_merge_sort(int s, int e) {
    if (s == e) {
        vector <int> init(1);
        init[0] = arr[s];

        return init;
    }

    int m = (s + e) / 2;
    vector<int> a = my_first_merge_sort(s, m);
    vector<int> b = my_first_merge_sort(m + 1, e);

    vector <int> merge;
    for (int i = 0, j = 0; i < a.size() && j < b.size(); ) {
        if (i == a.size()) {
            merge.push_back(b[j++]);
            continue;
        }

        if (j == b.size()) {
            merge.push_back(a[i++ ]);
            continue;
        }

        if (a[i] < b[j]) {
            merge.push_back(a[i++]);
        }
        else if (a[i] > b[j]) {
            merge.push_back(b[j++]);
        }
        else {
            merge.push_back(a[i++]);
            merge.push_back(b[j++]);
        }
    }

    return merge;
}

// 위에서 조금 더 최적화 해본 것
vector<int> imporve_merge_sort(int s, int e) {
    if (s == e) {
        return { arr[s] };
    }

    int m = (s + e) / 2;
    vector<int> a = imporve_merge_sort(s, m);
    vector<int> b = imporve_merge_sort(m+1, e);

    vector <int> merge;
    merge.reserve(a.size() + b.size());

    int i = 0, j = 0;
    while (i < a.size() && j < b.size()) {
        if (a[i] <= b[j]) {
            merge.push_back(a[i++]);
        } else {
            merge.push_back(b[j++]);
        }
    }

    while (i < a.size()) {
        merge.push_back(a[i++]);
    }

    while (j < b.size()) {
        merge.push_back(b[j++]);
    }

    return merge;
}

int temp[200000];

// 벡터 없이 인덱스만으로 정렬하기
void merge_sort(int s, int e) {
    if (s >= e) return;
    
    int m = (s+e) / 2;
    merge_sort(s, m);
    merge_sort(m+1, e);

    int i = s;
    int j = m+1;

    int idx = s;
    while (i <= m && j <= e) {
        if (arr[i] <= arr[j]) {
            temp[idx++] = arr[i++];
        } else {
            temp[idx++] = arr[j++];
        }
    }

    while (i <= m) {
        temp[idx++] = arr[i++];
    }

    while (j <= e) {
        temp[idx++] = arr[j++];
    }

    for (int x=s; x<=e; x++) {
        arr[x] = temp[x];
    }
}

int main() {
    cin.tie(0), cout.tie(0);
    ios_base::sync_with_stdio(false);

    int N; cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // vector <int> temp = imporve_merge_sort(0, N-1);
    // for (auto x : temp) cout << arr[i] << ' ';

    merge_sort(0, N-1);

    for (int i=0; i<N; i++) {
        cout << arr[i] << ' ';
    }

    return 0;
}