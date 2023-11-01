#include<iostream>
using namespace std;


void binary_search(int *numbers, int length, int num)
{
    bool flag = false;
    int l = 0;
    int r = length - 1;
    int mid;

    while ((l <= r) && (!flag)) {
        mid = (l + r) / 2;

        if (numbers[mid] == num) flag = true;
        if (numbers[mid] > num) r = mid - 1;
        else l = mid + 1;
    }

    if (flag) cout << "YES" << "\n";
    else cout << "NO" << "\n";

}


int main()
{
    int n, k;
    cin >> n >> k;
    int lst[n];
    for (int i = 0; i < n; i++){
        cin >> lst[i];
    }
    bool flag = false;
    int lst2[k];
    for (int j = 0; j < k; j++){
        cin >> lst2[j];
    }

    for (int q = 0; q < k; q++){
        binary_search(lst, n, lst2[q]);
    }
}