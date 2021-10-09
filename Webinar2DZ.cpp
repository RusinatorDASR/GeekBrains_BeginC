#include <iostream>
#include <string>
#include <stdint.h>

using namespace std;

//Задание 5*. Работа со структурами и объединениями:
union MyData {
    int unInt;
    float unFloat;
    char unChar;
};

struct MyVariant {
    MyData element;
    uint32_t isInt : 1;
    uint32_t isFloat : 1;
    uint32_t isChar : 1;
};

//Задание 2. Создание перечсления:
enum TicTacToeElems {EMPTY, X, O};
enum resultGame {notEND, win1p, win2p, tie};
const int MATRIX_CONST = 3;

//Задание 4*. Создание структуры для игры "Крестики - Нолики":
struct ticTacToe {
    TicTacToeElems elemPlayer1;
    TicTacToeElems elemPlayer2;
    resultGame whoWin;
    bool endGame;
    int countStep;
    string firstPlayer;
    string secondPlayer;
    //Задание 3. Создание массива из перечислений. Инициилизирую пустыми полями:
    TicTacToeElems matrix[MATRIX_CONST][MATRIX_CONST] = {
        {EMPTY, EMPTY, EMPTY},
        {EMPTY, EMPTY, EMPTY},
        {EMPTY, EMPTY, EMPTY}};
};

int main() {
    //Задание 1. Создание и инициализирование переменных:
    short snSomeShort = 0;
    //или
    int16_t snAnotherShort = 0;
    int nSomeInt = 0;
    long long lSomeLongLong = 0;
    //или
    int64_t lAnotherLongLong = 0;
    char cSomeChar = ' ';
    //или
    int8_t cAnotherChar = ' ';
    bool bSomeBool = false;
    float fSomeFloat = 0.0;
    double dSomeDouble = 0.0;

    //Пример работы с MyVariant:
    MyVariant Elem;
    Elem.element.unFloat = 0.1f;
    Elem.isChar = 0;
    Elem.isFloat = 1;
    Elem.isInt = 0;

    Elem.element.unInt = 4221;
    Elem.isChar = 0;
    Elem.isFloat = 0;
    Elem.isInt = 1;

    return 0;
}
