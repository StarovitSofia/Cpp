#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int main()
{
	//Приклад 25
	int a = 3;
	float b = 0.523;
	float y;

	y = pow(1.56 * sqrt(sin(b)) / 0.8942 * log(a), 4. / 1);
	cout << "Приклад номер 25: " << y;

	return 0;
}
