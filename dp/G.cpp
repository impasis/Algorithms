#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

typedef long long ll;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    ll ans[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    ans[0] = arr[0];
    if (n > 1)
        ans[1] = arr[1];

    for (int i = 2; i < n; i++)
        ans[i] = min(ans[i - 1], ans[i - 2]) + arr[i];

    cout << ans[n - 1] << endl;
    return 0;
}