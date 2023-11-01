#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> stack;
	vector<int> p;
	vector<int> lst(n);

	for (int i = 0; i < n; i++)
		cin >> lst[i];

	bool flag = true;
	int num = 1;

	for (int i = 0; i < n; i++){
		if (stack.size() > 0 && lst[i] > stack.back()){
			cout << 0 << endl;
			flag = false;
			break;
		}

		p.push_back(1);
		stack.push_back(lst[i]);
		while (stack.size() > 0 && stack.back() == num){
			p.push_back(2);
			stack.pop_back();
			num++;
		}

	}

	if (flag){
		int el = p.front();
		p.erase(p.begin());
		int cnt = 1;
		while (p.size() > 0){
			if (p.front() == el)
				cnt++;
			else {
				cout << el << " " << cnt << endl;
				el = p.front();
				cnt = 1;
			}
			p.erase(p.begin());
		}

		cout << el << " " << cnt << endl;
	}
	return 0;

}