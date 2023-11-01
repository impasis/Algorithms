#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    const int r = 200;
    int n, ot, cnt = 0;
    cin >> n;
    int arr[r][r];
    vector <int> lst;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> ot;
            arr[i][j] = ot;
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if (arr[i][j] == 1){
                lst.push_back(i + 1);
		lst.push_back(j + 1);
	    }
        }
    }

    for (int i = 1; i <= n; i++){
    int cnt = 0;
    for (int j = 0; j < lst.size(); j++){
    if (lst[j] == i) cnt++;}
    cout << cnt << endl;}
    
    return 0;
}