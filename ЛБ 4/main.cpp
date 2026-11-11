#include <iostream>
using namespace std;

// Оголошення функції 
bool Even(int K);
bool IsPalindrome(int K);

bool read_Integer29_input(int &A, int &B, int &C);
void calc_Integer29(int A, int B, int C, int &count, int &unused_area);
void print_Integer29_result(int count, int unused_area);

void task1();// виконнання першого завдання
void task2();// виконнання другого завдання


// Головна
int main() {
    int choice;
    do {
        cout << "\n[--Меню завданнь--]\n";
        cout << "1. Завдання 1 (Proc34 та Proc40)\n";
        cout << "2. Завдання 2 (Integer29)\n";
        cout << "0. Вихід з мень\n";
        cout << "Ваш вибір завдання: ";
        cin >> choice;
        
        if (cin.fail()) {
            cin.clear();
            cin.ignore(100, '\n');
            cout << "Помилка!\n";
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
            cout << "Вихід з програми.\n";
            break;
            default:
            cout << " Невірний вибір!\n";
        }
    } while (choice !=0);
    return 0;
}
// Визначення функції
// Proc 34 (перевірка на парність)
bool Even(int K) {
    return K % 2 == 0;// ділиться на 2 без остачі
}
// Proc34 (перевірка на паліндром)
bool IsPalindrome(int K) { // перевіряє паліндром без циклу
    if (K <= 0 || K >= 1000) return false;
    if (K < 10) return true;
    if (K < 100) {
        return (K / 10) == (K % 10);
    }
    
    return (K / 100) == (K % 10);
}

// Введення даних з перевіркою
bool read_Integer29_input(int &A, int &B, int &C) {
    cout << "Введіть A, B, C (від 1 до 100) : ";
    cin >> A >> B >> C;
    
    if (cin.fail()) {
        cin.clear();
        cin.ignore(100, '\n');
        return true;
    }
    // Перевірка діапазону від (-100 до 100)
    if (A < -100 || A > 100 || B < -100 || B > 100 || C < -100 || C > 100) return true;
    if (A <= 0 || B <= 0 || C <= 0) return true;
    return false;
}
// обчислення
void calc_Integer29(int A, int B, int C,int &count, int &unused_area) {
    int countA = A / C;
    int countB = B / C;
    count = countA * countB;
    unused_area = (A * B) - (count * C * C);
}
// Виведення
void print_Integer29_result(int count, int unused_area) {
    cout << "Кількість квадратів " << count << endl;
    cout << "Площа залишку " << unused_area << endl;
}
// Розв'язок для Завдання 1
void task1() {
    cout << "\n[--Завдання 1--] \n";
    
    // Завдання 1 (Proc34) парне чи непарне
    int a1, a2, a3, a4, a5;
    cout << "Введіть 5 чисел від (-100 до 100): ";
    cin >> a1 >> a2 >>a3 >> a4 >> a5;
    
    if (cin.fail() || a1 < -100 || a1 > 100 || a2 < -100 || a2 > 100 || a3 < -100 || a3 > 100 || a4 < -100 || a4 > 100 || a5 < -100 || a5 > 100) {
        cin.clear();
        cin. ignore(100, '\n');
        cout << "Неправильні дані\n";
        return;
    }
    int even_cnt = 0;
    if (Even(a1)) even_cnt++;
    if (Even(a2)) even_cnt++;
    if (Even(a3)) even_cnt++;
    if (Even(a4)) even_cnt++;
    if (Even(a5)) even_cnt++;
    
    cout << "Кількість парних " << even_cnt << endl;
    
    // Завдання 1 (Proc 40) перевірка на паліндром
    int b1, b2, b3, b4, b5;
    cout << "\nВведіть 5 додатних чисел до 1000 : ";
    cin >> b1 >> b2 >> b3 >> b4 >> b5;
    
    if (cin.fail() || b1 < 0 || b1 > 1000 || b2 < 0 || b2 > 1000 || b3 < 0 || b3 > 1000|| b4 < 0 || b4 > 1000 || b5 < 0 || b5 > 1000) {
        cin.clear();
        cin.ignore(100, '\n');
        cout << "Неправильні дані\n";
        return;
    }
    
    int pal_cnt = 0;
    if (IsPalindrome(b1)) pal_cnt++;
    if (IsPalindrome(b2)) pal_cnt++;
    if (IsPalindrome(b3)) pal_cnt++;
    if (IsPalindrome(b4)) pal_cnt++;
    if (IsPalindrome(b5)) pal_cnt++;
    
    cout << "Кількість паліндромів " << pal_cnt << endl;
}
// Розвʼязок для Завдання 2
void task2() {
    cout << "\n[--Завдання 2--] \n";
    int A, B, C;
    
    if (read_Integer29_input(A, B, C)) { // читає дані
        cout << "Помилка даних. Розвʼязок скасовано. \n";
        return;
    }
    int k, square;
    calc_Integer29(A, B, C, k, square);
    print_Integer29_result(k, square);
}
