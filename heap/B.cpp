#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
    int t, cmd, el;
    cin >> t;
    vector <int> lst;

    while (t--){
    cin >> cmd;
    if (cmd == 0){
        cin >> el;
        lst.push_back(el);
    }
    else if (cmd == 1){
        int max = 0;
        for (int i = 0; i < lst.size(); i++){
            if (lst[i] > lst[max]) max = i;}
        cout << lst[max] << endl;
        lst.erase(lst.begin() + max);
        }
    }
    return 0;
}