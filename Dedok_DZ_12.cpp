#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");

    //Task_1
    int count = 0;

    for (int num = 100; num <= 999; num++) {
        int hundreds = num / 100;
        int tens = (num / 10) % 10;
        int units = num % 10;

        if (hundreds == tens || hundreds == units || tens == units) {
            count++;
        }
    }
    cout << "Количество целых чисел с двумя одинаковыми цифрами: " << count << "\n";
    cout << "\n";

    //Task_2
    int count_1 = 0;

    for (int num_1 = 100; num_1 <= 999; num_1++) {
        int hundreds_1 = num_1 / 100;
        int tens_1 = (num_1 / 10) % 10;
        int units_1 = num_1 % 10;

        if (hundreds_1 != tens_1 && hundreds_1 != units_1 && tens_1 != units_1) {
            count++;
        }
    }
    cout << "Количество целых чисел с разными цифрами: " << count << "\n";
    cout << "\n";

    //Task_3
    int number;
    cout << "Введите целое число: ";
    cin >> number;

    int result = 0;
    int multiplier = 1;

    while (number != 0) {
        int digit = number % 10;
        if (digit != 3 && digit != 6) {
            result += digit * multiplier;
            multiplier *= 10;
        }
        number /= 10;
    }
    cout << "Число без цифр 3 и 6: " << result << "\n";
    cout << "\n";

    //Task_5
    int number_1;

    cout << "Введите целое число: ";
    cin >> number_1;

    int sum = 0;
    int temp_2 = number_1;

    while (temp_2 != 0) {
        int digit_1 = temp_2 % 10;
        sum += digit_1;
        temp_2 /= 10;
    }
    int cubeSum = sum * sum * sum;

    if (cubeSum == number_1 * number_1) {
        cout << "Куб суммы цифр числа равен " << number_1 * number_1 << "\n";
    }
    else {
        cout << "Куб суммы цифр числа не равен " << number_1 * number_1 << "\n";
    }
    cout << "\n";

    //Task_6
    int number_3;

    cout << "Введите целое число: ";
    cin >> number_3;

    cout << "Числа, на которые " << number_3 << " делится без остатка: " << "\n";

    for (int i = 1; i <= number_3; i++) {
        if (number_3 % i == 0) {
            cout << i << " ";
        }
    }
    cout << "\n";

    //Task_7
    int number1, number2;
    cout << "Введите первое целое число: ";
    cin >> number1;

    cout << "Введите второе целое число: ";
    cin >> number2;

    cout << "Числа, на которые оба введенных числа делятся без остатка: ";

    for (int i = 1; i <= number1 && i <= number2; i++) {
        if (number1 % i == 0 && number2 % i == 0) {
            cout << i << " ";
        }
    }
    cout << "\n";
}
