#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> q;
    string command;
    while (cin >> command) {
        if (command == "push") {
            int n;
            cin >> n;
            q.push(n);
            cout << "ok" << endl;
        }
        else if (command == "pop") {
            if (q.empty()) {
                cout << "error" << endl;
            }
            else {
                cout << q.front() << endl;
                q.pop();
            }
        }
        else if (command == "front") {
            if (q.empty()) {
                cout << "error" << endl;
            }
            else {
                cout << q.front() << endl;
            }
        }
        else if (command == "size") {
            cout << q.size() << endl;
        }
        else if (command == "clear") {
            while (!q.empty()) {
                q.pop();
            }
            cout << "ok" << endl;
        }
        else if (command == "exit") {
            cout << "bye" << endl;
            break;
        }
    }
    return 0;
}
