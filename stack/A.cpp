#include <vector>
#include <list>
#include <iostream>
using namespace std;

int main()
{
	vector <int> lst;
	list <int> stack;
	string cmd;
	int n;
	while (true) {
		cin >> cmd;
		if (cmd == "push") {
			cin >> n;
			stack.push_front(n);
			cout << "ok" << endl;
		}
		else if (cmd == "pop") {
			if (stack.size() > 0){
				cout << stack.front() << endl;
				stack.pop_front();
			}
			else 
				cout << "error" << endl;
			// size clear
		}
		else if (cmd == "back") {
			if (stack.size() > 0)
				cout << stack.front() << endl;
			else
				cout << "error" << endl;
		}
		else if (cmd == "size") {
			cout << stack.size() << endl;
		}
		else if (cmd == "clear") {
			cout << "ok" << endl;
			stack.clear();
		}
		else if (cmd == "exit") {
			cout << "bye" << endl;
			break;
		}
	}
}