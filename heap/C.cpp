#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> lst(n + 2);
    vector<int> ans(n + 2, 0);
    vector<int> stack(1, 0);
    lst[0] = -2147483647;
    lst[n + 1] = -2147483647;

    for (int i = 1; i <= n; i++)
        cin >> lst[i];

    for (int i = 0; i < n + 2; i++){
        while (lst[stack[stack.size() - 1]] > lst[i]){
            ans[stack[stack.size() - 1]] = i;
            stack.pop_back();
        }
        stack.push_back(i);
    }

    int ansi = 1;
    for (int i = 1; i < (n - k + 2); i++){
        if (ansi < i)
            ansi = i;
        while (ans[ansi] < i + k)
            ansi = ans[ansi];
        cout << lst[ansi] << endl;
    }

    return 0;
}
