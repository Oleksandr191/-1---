#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

// Очищення буфера введення при помилках
void clearInput() {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

// ==========================================
// ЗАВДАННЯ 1: Алгоритми з розгалуженням
// ==========================================
void task1() {
    cout << "\n=== ЗАВДАННЯ 1 ===" << endl;
    cout << "1. Частина 1 (If2)" << endl;
    cout << "2. Частина 2 (If36)" << endl;
    cout << "Оберіть частину (1 або 2): ";

    int subChoice;
    if (!(cin >> subChoice)) {
        cout << "Помилка введення! Очікувалось число." << endl;
        clearInput();
        return;
    }

    if (subChoice == 1) {
        // --- If2 ---
        int number;
        cout << "\n[If2] Введіть ціле число: ";
        if (!(cin >> number)) {
            cout << "Некоректне введення! Потрібно ввести ціле число." << endl;
            clearInput();
            return;
        }

        if (number > 0) {
            number -= 8;
        } else {
            number += 6;
        }

        cout << "Результат: " << number << endl;

    } else if (subChoice == 2) {
        // --- If36 ---
        double x;
        cout << "\n[If36] Введіть дійсне число x: ";
        if (!(cin >> x)) {
            cout << "Некоректне введення! Потрібно ввести дійсне число." << endl;
            clearInput();
            return;
        }

        int t;
        if (x <= -1.0) {
            t = static_cast<int>(floor(x - 2.0));
        } else if (x < 2.0) {
            t = static_cast<int>(floor(x * x + x));
        } else {
            t = 6;
        }

        cout << "Значення функції t(x) = " << t << endl;

    } else {
        cout << "Некоректний вибір частини завдання!" << endl;
    }
}

// ==========================================
// ЗАВДАННЯ 2: Потрапляння точки у фігуру (Варіант 22)
// ==========================================
void task2() {
    cout << "\n=== ЗАВДАННЯ 2 (Варіант 22) ===" << endl;

    double a, r, x, y;

    cout << "Введіть сторону великого квадрата a (a > 0): ";
    if (!(cin >> a) || a <= 0) {
        cout << "Помилка: сторона квадрата повинна бути додатним числом!" << endl;
        clearInput();
        return;
    }

    cout << "Введіть радіус кола r (r > 0): ";
    if (!(cin >> r) || r <= 0) {
        cout << "Помилка: радіус кола повинен бути додатним числом!" << endl;
        clearInput();
        return;
    }

    cout << "Введіть координату x точки: ";
    if (!(cin >> x)) {
        cout << "Помилка введення координати x!" << endl;
        clearInput();
        return;
    }

    cout << "Введіть координату y точки: ";
    if (!(cin >> y)) {
        cout << "Помилка введення координати y!" << endl;
        clearInput();
        return;
    }

    // Перевірка належності квадрату [-a/2, a/2] x [-a/2, a/2]
    bool insideSquare = (abs(x) <= a / 2.0) && (abs(y) <= a / 2.0);

    // Перевірка перебування поза колом (або на його межі)
    bool outsideCircle = (x * x + y * y >= r * r);

    // Зона 1: I чверть (x >= 0, y >= 0) і під діагоналлю y = x (тобто y <= x)
    bool part1 = (x >= 0) && (y >= 0) && (y <= x);

    // Зона 2: III чверть (x <= 0, y <= 0) і над діагоналлю y = x (тобто y >= x)
    bool part2 = (x <= 0) && (y <= 0) && (y >= x);

    bool belongsToVar22 = insideSquare && outsideCircle && (part1 || part2);

    if (belongsToVar22) {
        cout << "\nРезультат: Точка (" << x << ", " << y << ") ПОТРАПЛЯЄ у фігуру варіанта 22!" << endl;
    } else {
        cout << "\nРезультат: Точка (" << x << ", " << y << ") НЕ потрапляє у фігуру варіанта 22." << endl;
    }
}

// ==========================================
// ЗАВДАННЯ 3: Головне меню програми
// ==========================================
int main() {
    // Налаштування локалізації консолі
    setlocale(LC_ALL, "Ukrainian");

    int choice;

    do {
        cout << "\n==========================================" << endl;
        cout << "            ГОЛОВНЕ МЕНЮ                 " << endl;
        cout << "==========================================" << endl;
        cout << "1. Завдання 1 (Задачі If2 та If36)" << endl;
        cout << "2. Завдання 2 (Точка у фігурі — Варіант 22)" << endl;
        cout << "0. Вихід з програми" << endl;
        cout << "------------------------------------------" << endl;
        cout << "Ваш вибір: ";

        if (!(cin >> choice)) {
            cout << "Некоректне введення! Будь ласка, введіть число." << endl;
            clearInput();
            continue;
        }

        switch (choice) {
            case 1:
                task1();
                break;
            case 2:
                task2();
                break;
            case 0:
                cout << "Завершення роботи програми..." << endl;
                break;
            default:
                cout << "Невірний пункт меню! Спробуйте ще раз." << endl;
                break;
        }

    } while (choice != 0);

    return 0;
}
