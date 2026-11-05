#include <iostream>
using namespace std;

// Функція перевіряє, чи існує N-а цифра числа K
bool DigitN(int K, int N)
{
    // Відкидаємо цифри справа наліво
    for (int i = 0; i < N; i++)
    {
        K = K / 10;
    }

    // Якщо число залишилося більше нуля, цифра існує
    return K > 0;
}

int main()
{
    // K1, K2, K3, K4 - задані числа
    // N1, N2, N3, N4 - номери цифр
    int K1, K2, K3, K4;
    int N1, N2, N3, N4;

    // Введення чотирьох чисел
    cin >> K1 >> K2 >> K3 >> K4;

    // Введення номерів цифр
    cin >> N1 >> N2 >> N3 >> N4;

    // Виведення результатів True або False
    cout << boolalpha;

    cout << "Result 1 = " << DigitN(K1, N1) << endl;
    cout << "Result 2 = " << DigitN(K2, N2) << endl;
    cout << "Result 3 = " << DigitN(K3, N3) << endl;
    cout << "Result 4 = " << DigitN(K4, N4) << endl;

    return 0;
}
