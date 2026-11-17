// Лабораторна робота №5 — Завдання 1 (спільне для всіх варіантів)
// Студент: Костишен А. В. | Група: ІСТ-21
// Ел. пошта: st9763868@stud.duikt.edu.ua
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x, y;
    double defaults[5] = {0.0, 0.5, 1.0, 1.5, 2.0};

    cout << "Student: Kostyshen A. V., Group: IST-21" << endl;
    cout << "Enter 5 values of x:" << endl;

    for (int i = 0; i < 5; i++) {
        cout << "x[" << (i + 1) << "] = ";
        if (!(cin >> x)) {
            x = defaults[i];
            cout << x << endl;
        }
        y = pow(sin(x), 5) + fabs(5.0 * x - 1.5);
        cout << "  y(" << x << ") = " << y << endl;
    }

    return 0;
}
