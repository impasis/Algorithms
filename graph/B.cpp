#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t, cnt = 0;
    cin >> t;
    for (int i = 0; i < t; i++){
        vector <int> lst(t);
        for (int j = 0; j < t; j++){
            cin >> lst[i];
            if (lst[i] == 1) cnt++;}}
	
    printf("%d\n", cnt / 2);
    return 0;
}