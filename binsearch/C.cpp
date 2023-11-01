#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool check(int quan, vector<int>& ropes, int mid) {
    int cnt = 0;
    for (int el : ropes) {
        cnt += el / mid;
    }

    return cnt < quan;
}

int binary_search(vector<int>& ropes, int quan) {
    int l = 0;
    int r = *max_element(ropes.begin(), ropes.end()) + 1;
    while (r - l > 1) {
        int m = (l + r) / 2;

        if (check(quan, ropes, m))
            r = m;
        else 
            l = m;
    }

    return l;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> lst(n);
    for (int i = 0; i < n; i++) {
        cin >> lst[i];
    }

    cout << binary_search(lst, k) << endl;

    return 0;
}