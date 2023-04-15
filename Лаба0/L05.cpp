#include <iostream>
#include <vector>
#include <string>

using namespace std;

string join(const vector<string>& tokens, char delimiter)
{
    string result;
    for (int i = 0; i < tokens.size(); ++i)
    {
        result += tokens[i];
        if (i < tokens.size() - 1) {
            result += delimiter;
        }
    }
    return result;
}

int main() {
    vector<string> tokens = { "What", "is", "your", "name?" };
    char delimiter = '_';
    string joined = join(tokens, delimiter);
    cout << joined << endl;
    return 0;
}
