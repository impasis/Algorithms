#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int inf = 2147483647;
    
    vector<int> lst(n + 2);
    lst[0] = lst[n + 1] = -inf;
    
    for(int i = 1; i <= n; i++)
        cin>>lst[i];

    vector<int> r(n + 2, 0), e(n + 2, 0), stack={ 0 };

    for(int i = 1; i < n + 2; i++){
        while(lst[stack.back()] > lst[i]){
            r[stack.back()] = i;
            stack.pop_back();
        }
        stack.push_back(i);
    }

    stack={ 0 };

    for(int i = n + 1; i > 0; i--){
        while(lst[stack.back()] > lst[i]){
            e[stack.back()] = i;
            stack.pop_back();
        }
        stack.push_back(i);
    }
    
    int ans = -inf, s;

    for(int i = 1; i <= n; i++){
        int s = lst[i] * (r[i] - e[i] - 1);
        ans = max(ans, s);
    }

    cout << ans << endl;
    return 0;
}