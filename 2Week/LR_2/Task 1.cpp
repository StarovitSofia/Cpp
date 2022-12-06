//Приклад 8
#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int x;
    int A;
    int C;

    cout << "Enter x: ";
    cin >> x;
    cout << "Enter A: ";
    cin >> A;
    cout << "Enter C: ";
    cin >> C;

    float Y;

    if (A == C)
    {
        Y = x * pow(A - C, 3);
    }
    else if (A != C)
    {
        Y = pow(x, 3) - A;
    }
    else if (A == C)
    {
        Y = x + pow(A, 3);
    }
    else
    {
        cout << "Error";
    }

    cout << Y;

    return(0);
}
