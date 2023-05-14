#include <vector>
#include <iostream>
using namespace std;

void PrintVectorPart(const vector<int>& numbers) {
    int negative_index = -1;
    for (int i = 0; i < numbers.size(); ++i) {
        if (numbers[i] < 0) {
            negative_index = i;
            break;
        }
    }
    if (negative_index >= 0) {
        for (int i = negative_index - 1; i >= 0; --i) {
            cout << numbers[i] << " ";
        }
    } else {
        for (int i = numbers.size() - 1; i >= 0; --i) {
            cout << numbers[i] << " ";
        }
    }
}


int main(){
    PrintVectorPart({6, 1, 8, -5, 4});
    cout<<endl;
    PrintVectorPart({-6, 1, 8, -5, 4});
    cout<<endl;
    PrintVectorPart({6, 1, 8, 5, 4});
    cout<<endl;
    return 0;
}