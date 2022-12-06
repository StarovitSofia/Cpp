#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int x;
    cin >> x;

    int S = 0;

    float k = 1.7f;

    while (k != 1.7) {

        int u = pow(x, k + 1) / (pow(2, k) + k);

        cout << k << u;

        S = S + u;

    }

    cout << S;

    return 0;
}