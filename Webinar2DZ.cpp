#include <iostream>
#include <string>
#include <stdint.h>

using namespace std;

//������� 5*. ������ �� ����������� � �������������:
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

//������� 2. �������� �����������:
enum TicTacToeElems {EMPTY, X, O};
enum resultGame {notEND, win1p, win2p, tie};
const int MATRIX_CONST = 3;

//������� 4*. �������� ��������� ��� ���� "�������� - ������":
struct ticTacToe {
    TicTacToeElems elemPlayer1;
    TicTacToeElems elemPlayer2;
    resultGame whoWin;
    bool endGame;
    int countStep;
    string firstPlayer;
    string secondPlayer;
    //������� 3. �������� ������� �� ������������. ������������� ������� ������:
    TicTacToeElems matrix[MATRIX_CONST][MATRIX_CONST] = {
        {EMPTY, EMPTY, EMPTY},
        {EMPTY, EMPTY, EMPTY},
        {EMPTY, EMPTY, EMPTY}};
};

int main() {
    //������� 1. �������� � ����������������� ����������:
    short snSomeShort = 0;
    //���
    int16_t snAnotherShort = 0;
    int nSomeInt = 0;
    long long lSomeLongLong = 0;
    //���
    int64_t lAnotherLongLong = 0;
    char cSomeChar = ' ';
    //���
    int8_t cAnotherChar = ' ';
    bool bSomeBool = false;
    float fSomeFloat = 0.0;
    double dSomeDouble = 0.0;

    //������ ������ � MyVariant:
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
