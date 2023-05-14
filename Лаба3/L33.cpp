#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

vector<string> SplitIntoWords(const string& s) {
    vector<string> result;
    string word;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] != ' ') {
            word += s[i];
        }else{
            result.push_back(word);
            word="";
        }

    }
    result.push_back(word);
    return result;
}


int main() {
    string s = "C Cpp Java Python";
    vector<string> words = SplitIntoWords(s);
    cout<<words.size()<<" ";
    for(auto  it = begin(words);it != end(words); ++it){
        if (it != begin(words)){
            cout<<"/";
        }
        cout << *it;
    }
    cout<<endl;
    return 0;
}
