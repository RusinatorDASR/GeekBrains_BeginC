#include <iostream>
#include <cmath>
#include <stdint.h>

using namespace std;

int main() {

    // ������� 1. ����� ��������� ����� � ��������� �� 10 �� 20 ������������:

    int x = 0, y = 0;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    int sum = x + y;
    if (sum >= 10 && sum <= 20)
        cout << "true" << endl;
    else
        cout << "false" << endl;

    // ������� 2. ������ ����� ����� 10 � ������ ����� 10 ��� ����� ����� 10:

    if ((x == 10 && y == 10) || (x + y == 10))
        cout << "true" << endl;
    else
        cout << "false" << endl;
    // ������� 3. ������ �������� ����� �� 50:
    const int NUMB = 50;
    cout << "Your numbers: ";
    for (int i = 1; i <= NUMB; i += 2) {
        cout << i << ' ';
    }
    cout << "\n\n";

    // ������� 4*. ������� �� �����. ������ ��� ������� ����� � ����������� ����������� ����� 4000000001

    int64_t p = 0;
    bool bPrime = false;
    do {
        cout << "Enter a prime number or press 0 to exit" << endl;
        cin >> p;
        if (p < 0) {
            cout << "It's not a positive number!" << endl;
        } else if (p == 1) {
            cout << "1 - it's prime or not? I think not." << endl;
        } else if (p == 2) {
            bPrime = true;
        } else if (p % 2 == 0) {
            cout << "It's not a prime number!" << endl;
        } else {
            int64_t sqrtNumb = sqrt(p);
            int64_t cnt = 0;
            for (int64_t i = 3; i < sqrtNumb + 1; i += 2) {
                if (p % i == 0) {
                    cout << "It's not a prime number!" << endl;
                    cnt++;
                    break;
                }
            }
            if (cnt == 0) bPrime = true;
        }
    } while (!bPrime && p != 0);
    if (p != 0) cout << "Yes! " << p << " - it's a prime number!" << endl;

    // ������� 5*. ���������� ���

    cout << "\n\n" << "Enter year: ";
    int year = 0;
    cin >> year;
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << "\nIt's leap year";
    } else {
        cout << "\nIt's not leap year";
    }
    return 0;
}
