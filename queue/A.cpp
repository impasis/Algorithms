#include <iostream>
#include <vector>

using namespace std;

int main()
{
	string cmd;
	vector<int> que;

	while (cmd != "exit")
	{
		cin >> cmd;
		if (cmd == "push"){
			int n;
			cin >> n;
			que.push_back(n);
			cout << "ok" << endl;
		}

		else if (cmd == "pop"){
			if (que.size() > 0){
				cout << que.front() << endl;
				que.erase(que.begin());
			}
			else
				cout << "error" << endl;
		}

		else if (cmd == "front")
			if (que.size() > 0)
				cout << que.front() << endl;
			else
				cout << "error" << endl;

		else if (cmd == "size")
			cout << que.size() << endl;

		else if (cmd == "clear"){
			que.clear();
			cout << "ok" << endl;
		}
	}

	cout << "bye" << endl;
	return 0;
}