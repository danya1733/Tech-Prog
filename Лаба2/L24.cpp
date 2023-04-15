#include <iostream>
#include <queue>

using namespace std;

int main() {
    priority_queue<int> q;
    string query;

    while (cin >> query) {
        if (query == "CLEAR") {
            while (!q.empty()) {
                q.pop();
            }
        }
        if (query == "ADD") {
            int n;
            cin >> n;
            q.push(n);
        }
        if (query == "EXTRACT") {
            if (!q.empty()) {
                cout << q.top() << endl;
                q.pop();
            }
            else {
                cout << "CANNOT" << endl;
            }
        }
    }

    return 0;
}
