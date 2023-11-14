#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int n;
    cin >> n;

    int m[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> m[i][j];

    pair<int, int> a(0, 1);
    pair<int, int> b(1, 2);
    pair<int, int> c(2, 0);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                if (m[i][j] != 0 && m[j][k] != 0 && m[k][i] != 0 && i != j) {
                    int sum1 = m[a.first][a.second] + m[b.first][b.second] + m[c.first][c.second];
                    int sum2 = m[i][j] + m[i][k] + m[j][k];

                    if (sum2 < sum1) {
                        a = make_pair(i, j);
                        b = make_pair(j, k);
                        c = make_pair(k, i);
                    }
                }
            }
        }
    }

    cout << a.first + 1 << " " << b.first + 1 << " " << c.first + 1 << endl;

    return 0;
}