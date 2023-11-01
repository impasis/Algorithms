#include<iostream>
#include<stack>
#include<vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> lst(n);
    for(int i = 0; i < n; i++)
        cin >> lst[i];

    stack<pair<int, int>> stk;
    vector<int> ans(n, 0);

    for(int i = n - 1; i >= 0; i--){
        while(!stk.empty() && stk.top().first >= lst[i]){
            stk.pop();
        }
        if(!stk.empty()){
            ans[i] = stk.top().second;
        }
        else{
            ans[i] = -1;
        }

        stk.push({lst[i], i});
    }

    for(int i = 0; i < n; i++)
        cout << ans[i] << ' ';
    cout << endl;

    return 0;
}
