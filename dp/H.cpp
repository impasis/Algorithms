#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    const int r = 21;
    int n, m;
    cin >> n >> m;
    int arr[r][r];
    int mas[r][r];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    mas[0][0] = arr[0][0];

    for (int i = 1; i < m; i++)
        mas[0][i] = mas[0][i - 1] + arr[0][i];
    for (int i = 1; i < n; i++)
        mas[i][0] = mas[i - 1][0] + arr[i][0];

    for (int i = 1; i < n; i++){
        for (int j = 1; j < m; j++){
            mas[i][j] = min(mas[i - 1][j], mas[i][j - 1]) + arr[i][j];
        }
    }

    cout << mas[n - 1][m - 1] << endl;
    return 0;
}