#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

typedef long long ll;

int main()
{
    int n;
    cin >> n;
    ll arr[n + 2];
    arr[0] = 1;
    arr[1] = 1;

    for (int i = 2; i <= n; i++){
        if (i % 2 == 0)
            arr[i] = arr[i / 2] + arr[i / 2 - 1];
        else
            arr[i] = arr[(i - 1) / 2] - arr[(i - 1) / 2 - 1];
    }

    cout << arr[n] << endl;
    return 0;
}