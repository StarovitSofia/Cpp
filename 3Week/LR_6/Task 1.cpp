#include <iostream>

using namespace std;

int main() {
    int number;
    int count = 0;
    int a;
    int b;
    int c;

    cout << "Введіть трьохцифрове число : ";
    cin >> number;
    a = number / 100;
    b = number / 10 % 10;
    c = number % 10;

    cout << "Перше число" << a << "\n";
    cout << "Друге число" << b << "\n";
    cout << "Третє число" << c << "\n";

    if ((a % 2) == 0) {
        count++;
    }
    if ((b % 2) == 0) {
        count++;
    }
    if ((c % 2) == 0) {
        count++;
    }

    cout << "Кількість парних чисел : " << count;


    return 0;
}