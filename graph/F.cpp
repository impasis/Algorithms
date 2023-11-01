#include <iostream>

using namespace std;

int main()
{
    int n, m;
    const int r = 200;
    cin >> n >> m;
    int arr[r][r];
    string ans = "YES";

    for (int i = 0; i < m; i++){
        int x, y;
        cin >> x >> y;
        arr[x - 1][y - 1] = 1;
        arr[y - 1][x - 1] = 1;}
    
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if (arr[i][j] == 0) ans = "NO";}}

    cout << ans << endl;
    return 0;
}