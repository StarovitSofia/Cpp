//�������� 3
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a;
    int b;
    int h;

    cout << "������ ����� a" << "\n";
    cin >> a;
    cout << "������ ����� b" << "\n";
    cin >> b;
    cout << "������ ����� h" << "\n";
    cin >> h;

    for (int i = a; i <= b; i += h) {
        double x = i;
        double y;

        y = 8 + sqrt(x-7)/(x+5);

        cout << "-------------" << "\n";
        cout << " : " << " X " << " : " << " Y " << ":" << "\n";
        cout << "-------------" << "\n";
        cout << " :  " << a << "  : " << y << " : " << "\n";
        cout << "-------------" << "\n";


        while (y == 0)

            cout << "x �� �������� ���";
    }

    return 0;
}