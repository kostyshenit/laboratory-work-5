// Лабораторна робота №5 — Завдання 2 (Варіант 8, цикл for)
// Студент: Костишен А. В. | Група: ІСТ-21
// Ел. пошта: st9763868@stud.duikt.edu.ua
#include <iostream>
using namespace std;

int main()
{
    unsigned long long product = 1;
    unsigned long long num;
    unsigned long long defaults[10] = {1, 2, 3, 4, 5, 2, 1, 3, 2, 1};

    cout << "Student: Kostyshen A. V., Group: IST-21" << endl;
    cout << "Enter 10 natural numbers:" << endl;

    for (int i = 0; i < 10; i++) {
        cout << "Number " << (i + 1) << ": ";
        if (!(cin >> num)) {
            num = defaults[i];
            cout << num << endl;
        }
        if (num == 0) {
            cout << "Error: natural numbers must be >= 1." << endl;
            return 1;
        }
        product *= num;
    }

    cout << "Product of 10 natural numbers = " << product << endl;
    return 0;
}
