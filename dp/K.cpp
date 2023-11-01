#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;
    vector <int> lst(t);
    for (int i = 0; i < t; i++){
        cin >> lst[i];
    }
    
    sort(lst.begin(), lst.end());
    vector <int> ans(t);
    ans[1] = lst[1] - lst[0];
    if (t > 2) ans[2] = lst[2] - lst[0];

    for (int i = 3; i < t; i++){
        ans[i] = min(ans[i - 1], ans[i - 2]) + lst[i] - lst[i - 1];
    }

    printf("%d\n", ans[t - 1]);
    return 0;
}