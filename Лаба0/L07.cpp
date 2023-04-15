#include <iostream>
#include <vector>
#include <random>

using namespace std;


bool checkNum(int num) {
    int b = num;
    while (b > 0) {
        int y = b % 10;
        if (y > 1 and num % y == 0) {
            return true;
            break;
        }
        b /= 10;
    }
    return false;
}



int main() {
    random_device rnd; 
    mt19937 generate(rnd());  
    uniform_int_distribution<> range(-3200, 3200); 
    vector<int> vector;

    int x = range(generate);
    while (x != 0) {
        vector.push_back(x);
        x = range(generate);
    }
    vector.push_back(x);

    for (int i = 0; i < vector.size(); i++) {
        cout << vector[i]<< " ";
    }
    cout << endl;
    int counter = 0;
    cout << "(";
    for (int i = 0; i < vector.size(); i++) {
        if (checkNum(vector[i])) {
            cout << vector[i]<<";";
            counter++;
        }
    }
    cout << ")";
    cout <<"itogo:" << counter;

    

}
