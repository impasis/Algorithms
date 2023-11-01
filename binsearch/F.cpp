#include <iostream>
#include <vector>

using namespace std;

int b_right(const vector<int>& lst, int num) {
    int left = 0;
    int right = lst.size();
    while (left < right) {
        int mid = (left + right) / 2;
        if (num < lst[mid])
            right = mid;
        else 
            left = mid + 1;
     
    }

    return left;
}

int b_left(const vector<int>& lst, int num)
{
    int left = 0;
    int right = lst.size();
    while (left < right) {
        int mid = (left + right) / 2;
        if (num > lst[mid])
            left = mid + 1;
        else
            right = mid;
        
    }

    return left;
}

int main() 
{
    int n;
    cin >> n;
    vector<int> mons(n);
    for (int i = 0; i < n; i++) {
        cin >> mons[i];
    }

    int k;
    cin >> k;
    vector<int> numbers(k);
    for (int i = 0; i < k; i++) {
        cin >> numbers[i];
    }

    for (int i = 0; i < k; i++) {
        int l = b_left(mons, numbers[i]);
        int r = b_right(mons, numbers[i]);
        cout << r - l << endl;
    }

    return 0;
}