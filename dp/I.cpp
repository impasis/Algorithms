#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
   
    vector<int> plat(n);
    for(int i = 0; i < n; i++) {
        cin >> plat[i];
    } 
    
    vector<int> ans(n, 0);
    if (n > 1){
        ans[1] = abs(plat[1] - plat[0]);
    }
    
    for (int i = 2; i < n; i++) {
        ans[i] = min(ans[i - 1] + abs(plat[i] - plat[i - 1]), ans[i - 2] + 3 * abs(plat[i] - plat[i - 2]));
    }
    
    cout << ans[n - 1] << endl;
    
    return 0;
}