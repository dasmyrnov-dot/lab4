#include <iostream>
using namespace std;

// Функція для виконання арифметичних операцій
double Calc(double A, double B, int Op)
{
    // Вибираємо операцію залежно від Op
    switch (Op)
    {
        case 1:
            return A - B; // Віднімання

        case 2:
            return A * B; // Множення

        case 3:
            return A / B; // Ділення

        default:
            return A + B; // Додавання
    }
}

int main()
{
    // A і B - дійсні числа
    // N1, N2, N3 - номери операцій
    double A, B;
    int N1, N2, N3;

    // Введення чисел A і B
    cin >> A >> B;

    // Введення номерів операцій
    cin >> N1 >> N2 >> N3;

    // Виконуємо три операції
    cout << "Result 1 = " << Calc(A, B, N1) << endl;
    cout << "Result 2 = " << Calc(A, B, N2) << endl;
    cout << "Result 3 = " << Calc(A, B, N3) << endl;

    return 0;
}
