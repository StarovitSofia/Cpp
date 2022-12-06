#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int main()
{
	//Приклад 20
	int a = 1;
	float b = 1.201;
	float y;

	y = pow(fabs(0.7 * log(a / b) * pow(sin((a + b) * M_PI / 10), 2) + 0.8 * log(b / a) * pow(cos(a + b) * M_PI, 2)), 3 / 2);
	cout << "Приклад номер 20: " << y;

	return 0;
}