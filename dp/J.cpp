#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> lst(n + 1, n);
	lst[1] = 0;

	for (int i = 2; i <= n; i++){
		lst[i] = min(lst[i - 1] + 1, lst[i]);
		if (i % 2 == 0){
			lst[i] = min(lst[i / 2] + 1, lst[i]);
		}
		if (i % 3 == 0){
			lst[i] = min(lst[i / 3] + 1, lst[i]);
		}
	}

	cout << lst[n] << endl;
	return 0;
}