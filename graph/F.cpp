#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> arr(n, vector<int>(n, 0));

    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        arr[x][y] = 1;
        arr[y][x] = 1;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i][j] == 1) {
                for (int k = 0; k < n; k++) {
                    if (k != j && k != i && arr[i][k] + arr[j][k] == 1) {
                        cout << "NO" << endl;
                        return 0;
                    }
                }
            }
        }
    }

    cout << "YES" << endl;

    return 0;
}