// Лабораторна робота №5 — Завдання 3 (Варіант 8, цикл while)
// Студент: Костишен А. В. | Група: ІСТ-21
// Ел. пошта: st9763868@stud.duikt.edu.ua
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double a, b, h;
    cout << "Student: Kostyshen A. V., Group: IST-21" << endl;
    cout << "Enter a, b, h: ";
    if (!(cin >> a >> b >> h)) {
        a = -1.0; b = 2.0; h = 0.5;
        cout << a << " " << b << " " << h << endl;
    }

    if (h <= 0 || a > b) {
        cout << "Invalid interval or step (require h > 0 and a <= b)." << endl;
        return 1;
    }

    cout << "-----------------------" << endl;
    cout << ":   X     :     Y     :" << endl;
    cout << "-----------------------" << endl;

    double x = a;
    while (x <= b + 1e-9) {
        double c = cos(x);
        if (c < 0.0) {
            cout << "Stopped: x = " << x << " is outside domain (cos(x) < 0)." << endl;
            break;
        }
        double y = sqrt(c) + sin(x);
        cout << ": " << setw(7) << fixed << setprecision(2) << x
             << " : " << setw(9) << setprecision(4) << y << " :" << endl;
        x += h;
    }

    cout << "-----------------------" << endl;
    return 0;
}
