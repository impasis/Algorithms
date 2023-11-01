#include <iostream>
#include <list>
#include <vector>
using namespace std;

list <int> queue1;
list <int> queue2;
vector <int> out;

void func() {
    if (queue1.size() < queue2.size()) {
        queue1.push_back(queue2.front());
        queue2.pop_front();
    }
    else if (queue1.size() > queue2.size() + 1) {
        queue2.push_front(queue1.back());
        queue1.pop_back();
    }
}

int main() {
    int t, num = 0, lenh = 0;
    cin >> t;
    char mark;
    while (t-- > 0) {
        cin >> mark;
        switch (mark) {
            case '-':
                out.push_back(queue1.front());
                lenh++;
                queue1.pop_front();
                break;
            case '+':
                cin >> num;
                queue2.push_back(num);
                break;
            case '*':
                cin >> num;
                queue1.push_back(num);
                break;
        }
        func();
    }
    for (int i = 0; i < lenh; i++) {
        cout << out[i] << '\n';
    }

    return 0;
}