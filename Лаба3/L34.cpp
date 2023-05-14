#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

template <typename T>
void RemoveDuplicates(vector<T>& elements){
    for (int i = 0; i < elements.size(); ++i) {
        for (int j = 0; j < elements.size(); ++j) {
            if(i!=j && elements[i]==elements[j]){
                elements.erase(elements.begin()+j);
            }
        }
    }
}

int main() {
    vector<int> v1{6,4,7,6,4,4,0,1};
    RemoveDuplicates(v1);
    for (const auto& x : v1) {
        cout<<x<<" ";
    }
    cout<<endl;
    vector<string> v2{"C","C++","C++","C","C++"};
    RemoveDuplicates(v2);
    for (const auto& x : v2) {
        cout<<x<<" ";
    }

    cout<<endl;
    return 0;
}
