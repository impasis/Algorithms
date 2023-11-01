#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

typedef long long ll;

int main()
{
    int n;
    cin >> n;
    ll m[n + 1][2];
    m[1][0] = 1;
    m[1][1] = 1;

    for (int i = 2; i <= n; i++){
        m[i][0] = m[i - 1][0] + m[i - 1][1];
        m[i][1] = m[i - 1][0];
    }

    cout << m[n][0] + m[n][1] << endl;
    return 0;
}