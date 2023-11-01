#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    const int r = 200;
    int n, ot, cnt = 0;
    string em = "";
    cin >> n;
    int arr[r][r];
    vector<int> lst(n);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> ot;
            arr[i][j] = ot;
        }
    }

    getline(cin, em);

    for (int i = 0; i < n; i++){
    	cin >> lst[i];
    }

    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if (arr[i][j] == 1){
            	if (lst[i] != lst[j]) cnt++;
            }
        }
    }

    printf("%d\n", cnt);
    return 0;
}