#include <iostream>
#include <vector>
#include <algorithm>

// определение функции-предиката
bool is_positive(int x) {
    return x > 0;
}

template <typename It, typename Pred>
bool any_off(It first, It last, Pred f) {
    for (auto it = first; it != last; ++it) {
        if (f(*it)) {
            return true;
        }
    }
    return false;
}


int main() {
    // создание вектора чисел
    std::vector<int> v{ -1, -2, -3, -4, -5 };

    // проверка, есть ли положительный элемент в векторе
    bool result = any_off(v.begin(), v.end(), is_positive);

    // вывод результата
    if (result) {
        std::cout << "elements which >0 exist" << std::endl;
    }
    else {
        std::cout << "elements which >0 not exist" << std::endl;
    }

    return 0;
}

