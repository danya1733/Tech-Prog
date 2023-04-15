#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> Split(const string& str, char delimiter)
{
    vector<string> splited;
    string segment;
    for (char c : str)
    {
        if (c != delimiter)
        {
            segment += c;
        }
        else
        {
            splited.push_back(segment);
            segment = "";
        }
    }
    if (!segment.empty()) { // добавляем последний сегмент, если он не пустой
        splited.push_back(segment);
    }
    return splited;
}

int main() {
    string str;
    getline(cin, str);
    char delimiter;
    cin >> delimiter;

    vector<string> strs;

    if (!str.empty()) {
        strs = Split(str, delimiter);
    }

    for (int i = 0; i < strs.size(); ++i)
    {
        cout << strs[i];
        if (i < strs.size() - 1) {
            cout << endl;
        }
    }
}
