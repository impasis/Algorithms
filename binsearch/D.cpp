#include <iostream>
#include <vector>
using namespace std;

int binary_search(vector<int>& lst, int cows)
{
    int left = 0;
    int right = lst[lst.size() - 1] - lst[0] + 1;
    while (left < right) {
        int mid = (left + right) / 2;
        int per = lst[0];
        int cnt = 1;
        for (int i = 1; i < lst.size(); i++) {
            if (lst[i] - per > mid) {
                cnt++;
                per = lst[i];
            }
        }
        if (cnt >= cows)
            left = mid + 1; 
        else
            right = mid;
    }

    return left;
}

int main() 
{
    int n, k;
    cin >> n >> k;
    vector<int> stalls(n);
    for (int i = 0; i < n; i++)
        cin >> stalls[i];

    cout << binary_search(stalls, k) << endl;

    return 0;
}