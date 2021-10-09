#include <iostream>

using namespace std;
const int CONSTANT = 21;
extern const int ex_a;
extern const int ex_b;
extern const int ex_c;
extern const int ex_d;

int main() {
    int x = 0;
    cout << "Input some integer number: ";
    cin >> x;
    cout << endl;

    // Задание 2. Выполнение условия с помощью условного оператора:
    int result = 0;
    result = x <= CONSTANT ? x - CONSTANT : 2 * (x - CONSTANT);
    cout << result << endl;

    // Задание 3*. Создание массива 3х3х3 и использование указателя:
        int SomeArray[3][3][3] = {
        {{0, 0, 0}, {0, 0, 1} , {0, 0, 2}},
        {{0, 1, 0}, {0, 4221, 1} , {0, 1, 2}},
        {{0, 2, 0}, {0, 2, 1} , {0, 2, 2}},
    };
    int* pArr = &SomeArray[1][1][1];
    cout << endl << *pArr << endl;

    // Задание 1, 4*. Арифметические действия с extern:
    float answer = ex_a * (ex_b + static_cast<float>(ex_c) / ex_d);
    cout << endl << answer << endl;

    return 0;
}
