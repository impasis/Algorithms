#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

typedef long long ll;

int main()
{
    int n;
    cin >> n;
    ll arr[n + 1];
    arr[1] = 2;
    arr[2] = 4;
    arr[3] = 7;

    for (int i = 4; i <= n; i++)
        arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3];

    cout << arr[n] << endl;
    return 0;
}