#include <iostream>
#include <string>

using namespace std;

int main() {
    int number;

    cout << "Введіть номер потягу(від 1 до 7) : ";
    cin >> number;

    switch (number) {
    case 1: cout << "Потяг 1, час відпавлення 9:00"; break;
    case 2: cout << "Потяг 2, час відпавлення 10:00"; break;
    case 3: cout << "Потяг 3, час відпавлення 11:00"; break;
    case 4: cout << "Потяг 4, час відпавлення 12:00"; break;
    case 5: cout << "Потяг 5, час відпавлення 13:00"; break;
    case 6: cout << "Потяг 6, час відпавлення 14:00"; break;
    case 7: cout << "Потяг 7, час відпавлення 15:00"; break;
    default: cout << "Потягу " << number << " в списку немає((("; break;
    }

    return 0;
}