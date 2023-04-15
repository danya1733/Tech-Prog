#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_set>

using namespace std;

int main() {
    string word;
    cin >> word;
    unordered_set<char> common_letters;
    for (char c : word) {
        common_letters.insert(c);
    }

    while (cin>>word)
    {
        unordered_set<char> current_letters;
        for (char c : word) {
            current_letters.insert(c);
        }
        unordered_set<char> new_common_letters;
        for (char c : common_letters) {
            if (current_letters.count(c) > 0) {
                new_common_letters.insert(c);
            }
        }
        common_letters = new_common_letters;

        string result;
        for (char c : common_letters) {
            result += c;
        }
        sort(result.begin(), result.end());
        cout << result << endl;
    }



    return 0;
}
