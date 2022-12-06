//Завдання 2
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int number = 1;

    for (int a = 1; a <= 10; a++) {
        cout << "Введіть " << a << " натуральне число : ";

        int cout = 1;
        cin >> cout;
        number *= cout;

    }
    cout << "Добуток десяти натуральних чисел = " << number;

    return 0;
}