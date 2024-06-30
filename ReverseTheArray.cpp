#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    vector<int> ans {1, 2, 3, 4, 5, 6, 7, 8};

    int start = 0;
    int end = ans.size() - 1;

    while (start <= end) {
        swap(ans[start], ans[end]);
        start++;
        end--;
    }

    for (int i = 0; i < ans.size(); i++) {
        cout << " " << ans[i];
    }

    return 0;
}
