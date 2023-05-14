#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void print_vector(const vector<int>& v) {
    for (auto x : v) {
        cout << x << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        v[i] = i + 1;
    }

    sort(v.begin(), v.end(), greater<int>());

    do {
        print_vector(v);
    } while (prev_permutation(v.begin(), v.end()));

    return 0;
}
