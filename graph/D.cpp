#include <iostream>
using namespace std;

int main()
{
	const int n = 101;
	int r, num;
	string ans = "YES";

	cin >> r;
	int arr[n][n];

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < r; j++) {
			cin >> num;
			arr[i][j] = num;
		}
	}

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < r; j++) {
			if (arr[i][i] != 0 || arr[i][j] != arr[j][i]) ans = "NO";
		}
	}
	cout << ans;
	return 0;
}