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
		if (cmd == "push_back"){
			int n;
			cin >> n;
			que.push_back(n);
			cout << "ok" << endl;
		}

		if (cmd == "push_front"){
			int n;
			cin >> n;
			que.insert(que.begin(), n);
			cout << "ok" << endl;
		}

		else if (cmd == "pop_front"){
			if (que.size() > 0){
				cout << que.front() << endl;
				que.erase(que.begin());
			}
			else
				cout << "error" << endl;
		}

		else if (cmd == "pop_back"){
			if (que.size() > 0){
				cout << que.back() << endl;
				que.pop_back();
			}
			else
				cout << "error" << endl;
		}

		else if (cmd == "front")
			if (que.size() > 0)
				cout << que.front() << endl;
			else
				cout << "error" << endl;

		else if (cmd == "back")
			if (que.size() > 0)
				cout << que.back() << endl;
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