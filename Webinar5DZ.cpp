#include <iostream>

using namespace std;
//==========================//
// Задание 1. Вывод массива //
//==========================//
void PrintArray (double* const s, const int SIZE) {
    for (int i = 0; i < SIZE; ++i) {
        cout << s[i] << " ";
    }
    cout << endl;
}

void PrintArray (int* const s, const int SIZE) {
    for (int i = 0; i < SIZE; ++i) {
        cout << s[i] << " ";
    }
    cout << endl;
}
//===========================================//
// Задание 2. Замена элементов массива 0 - 1 //
//===========================================//
void Revert01Array (int* s, const int SIZE) {
    for (int i = 0; i < SIZE; ++i) {
        s[i] = !s[i];
    }
}
//==================================//
// Задание 3. Инициализация массива //
//==================================//
void GetArray (int* s, const int SIZE) {
    s[0] = 1;
    for (int i = 1; i < SIZE;++i) {
        s[i] = s[i-1] + 3;
    }
}
//========================================//
// Задание 4*. Смещение элементов массива //
//========================================//
void ScrollArray(int* s, const int SIZE, int n) {
    n = ((SIZE + n) <= SIZE) ? (SIZE + n) : ((SIZE + n) % SIZE);
    for (int i = 0; i < n; ++i) {
        int x = s[SIZE-1];
        for (int j = SIZE - 1; j > 0; --j) {
            s[j] = s[j-1];
        }
        s[0] = x;
    }

}
//==========================================//
// Задание 5**. Равенство элементов массива //
//==========================================//
bool sumElemArray(int* const s, const int SIZE) {
    int sumLeft = 0;
    int sum = 0;
    for (int i = 0; i < SIZE; ++i) {
        sum += s[i];
    }
    for (int j = 0; j < SIZE; ++j) {
        for (int i = 0; i < SIZE - j; ++i) {
            sumLeft += s[i];
        }
        if (sumLeft == sum - sumLeft) return true;
        sumLeft = 0;
    }
    return false;
}

int main() {
    const int SIZE = 8;
    double task1Arr[SIZE] = {0.0, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0};
    PrintArray(task1Arr, SIZE);

    int task2Arr[SIZE] = {0, 0, 1, 1, 1, 0, 0, 0};
    PrintArray(task2Arr, SIZE);
    Revert01Array(task2Arr, SIZE);
    PrintArray(task2Arr, SIZE);

    int task3Arr[SIZE];
    GetArray(task3Arr, SIZE);
    PrintArray(task3Arr, SIZE);

    int task4Arr[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8};
    PrintArray(task4Arr, SIZE);
    ScrollArray(task4Arr, SIZE, -3);
    PrintArray(task4Arr, SIZE);

    int task5Arr[SIZE] = {1, 1, 1, 1, 1, 1, 1, 7};
    cout << boolalpha << sumElemArray(task5Arr, SIZE);

    return 0;
}

