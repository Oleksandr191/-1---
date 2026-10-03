#include <iostream>
#include <cmath> // підключення бібліотеки математичних функцій
using namespace std;

int main()
{
    // Integer29. Дано цілі додатні числа A, B, C.
    // Знайти кількість квадратів зі стороною C,
    // які розміщуються на прямокутнику A * B,
    // а також площу незайнятої частини прямокутника.

    cout << "Integer29." << endl;

    int A, B, C, N, S; // декларація цілих змінних

    // введення даних
    cout << "A = "; cin >> A;
    cout << "B = "; cin >> B;
    cout << "C = "; cin >> C;

    // підрахунок
    N = (A / C) * (B / C); // кількість квадратів
    S = A * B - N * C * C; // незайнята площа

    // виведення результату
    cout << "Number of squares = " << N << endl;
    cout << "Free area = " << S << endl;


    // Boolean40. Дано координати двох різних полів шахової дошки.
    // Перевірити істинність висловлювання:
    // «Кінь за один хід може перейти з одного поля на інше».

    cout << "\nBoolean40.\n";

    int x1, y1, x2, y2; // декларація цілих змінних

    // введення даних
    cout << "x1 = "; cin >> x1;
    cout << "y1 = "; cin >> y1;
    cout << "x2 = "; cin >> x2;
    cout << "y2 = "; cin >> y2;

    // підрахунок
    bool can_move = (abs(x1 - x2) == 1 && abs(y1 - y2) == 2) ||
                    (abs(x1 - x2) == 2 && abs(y1 - y2) == 1);

    // виведення результату
    cout << "Knight can move = " << boolalpha << can_move << endl;


    // Math7. Обчислити математичний вираз (таб.3 N7).

    cout << "\nMath7.\n";

    const double pi = 3.141592; // визначення дійсної константи
    double x, num, denom, y; // декларація дійсних змінних

    // введення даних
    cout << "Real argument x = ";
    cin >> x;

    // підрахунок
    num = 0.5 * (log(fabs(x)) / log(4)) *
          sqrt(fabs(x * sin(x) * cos(x))); // чисельник

    denom = cos(x + 32 * pi / 180) +
            0.5 * sqrt(x + 5); // знаменник

    y = num / denom; // обчислення функції

    // виведення результату
    cout << "Function y = " << y << endl;

    return 0;
}
