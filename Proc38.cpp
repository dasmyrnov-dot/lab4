#include <iostream>
using namespace std;

// Функція для підрахунку кількості цифр числа
int DigitCount(int K)
{
    int count = 0;

    // Рахуємо кількість цифр
    while (K > 0)
    {
        count++;
        K = K / 10;
    }

    return count;
}

int main()
{
    // K - ціле додатне число
    int K;

    // Вводимо п'ять чисел
    for (int i = 1; i <= 5; i++)
    {
        cin >> K;

        // Виводимо кількість цифр числа
        cout << "Digit count = " << DigitCount(K) << endl;
    }

    return 0;
}
