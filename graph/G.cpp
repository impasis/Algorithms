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
    string ans = "YES";

    for (int i = 0; i < m; i++){
    int x, y;
    cin >> x >> y;
    lst.push_back(x);
    lst.push_back(y);}
    
    vector <int> pans;
    for (int i = 1; i <= n; i++){
    int cnt = 0;
    for (int j = 0; j < m * 2; j++){
    if (lst[j] == i) cnt++;}
    pans.push_back(cnt);}
    
    for (int i = 1; i < n; i++){
    if (pans[i] != pans[i - 1]) ans = "NO";}

    cout << ans << endl;
    return 0;
}