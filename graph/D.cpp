#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int n;
    cin >> n;
    int arr[n][n];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];

    map <int, vector <int>> m;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (arr[i][j] == 1){
                if (m.find((i + 1)) != m.end())
                    m[i + 1].push_back(j + 1);
                else
                    m[i + 1] = {j + 1};
            }
        }
    }


    /*for (auto& [key, value] : m){
        cout << key << " ";
        for (int i = 0; i < value.size(); i++)
            cout << value[i] << " ";
        cout << endl;
    }*/

    vector <int> stocks;
    vector <int> istocks;
    vector <int> values;

    for (auto& [key, value] : m){
        for (auto& el : value)
            values.push_back(el);
    }

    for (int i = 1; i <= n; i++)
        if (find(values.begin(), values.end(), i) == values.end())
            stocks.push_back(i);

    for (int i = 1; i <= n; i++)
        if (m.find(i) == m.end())
            istocks.push_back(i);

    cout << stocks.size() << endl;

    for (auto& el : stocks)
        cout << el << endl;

    cout << istocks.size() << endl;

    for (auto& el : istocks)
        cout << el << endl;

    return 0;
}