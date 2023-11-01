#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    const int r = 200;
    int arr[r][r];
    string ans = "NO";
    for (int i = 0; i < t; i++){
        for (int j = 0; j < t; j++){
            cin >> arr[i][j];}}
    
    for (int i = 0; i < t; i++){
        for (int j = 0; j < t; j++){
            if (arr[i][i] == 1) ans = "YES";}}

    cout << ans << endl;
    return 0;

}