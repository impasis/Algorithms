#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector <int> lst;

    for (int i = 0; i < m; i++){
        int x, y;
        cin >> x >> y;
        lst.push_back(x);
        lst.push_back(y);
    }

    for (int i = 1; i <= n; i++){
        int cnt = 0;
        for (int j = 0; j < m * 2; j++){
            if (lst[j] == i) cnt++;}
        cout << cnt << " ";}

    return 0;
}