№22
#include <iostream>
using namespace std;

int main()
{
    

    // Декларація змінних
    double TF, TC;

    cout << "Begin22" << endl;

    // Введення температури за Фаренгейтом
    cout << "Enter temperature in Fahrenheit: ";
    cin >> TF;

    // Розрахунок температури за Цельсієм
    TC = (TF - 32) * 5 / 9;

    // Виведення результату
    cout << "Temperature in Celsius: " << TC << endl;
}


№36
#include <iostream>
using namespace std;

int main()
{
    // задача Begin36
    // декларація змінних
    double L, D;
    const double PI = 3.14;

    // введення змінної
    cout << "Begin36" << endl;
    cout << "Enter circle length: ";
    cin >> L;

    // розрахунок результату
    D = L / PI;

    // вивід результату
    cout << "Circle diameter: " << D << endl;

    return 0;
}

№37
#include <iostream>
using namespace std;

int main()
{
    // задача Begin37
    // декларація змінних
    double a, b, H;

    // введення змінних
    cout << "Begin37" << endl;

    cout << "Enter number a: ";
    cin >> a;

    cout << "Enter number b: ";
    cin >> b;

    // розрахунок результату
    H = 2 * a * b / (a + b);

    // вивід результату
    cout << "Harmonic mean: " << H << endl;

    return 0;
}
