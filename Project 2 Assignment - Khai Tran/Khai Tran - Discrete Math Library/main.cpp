#include <iostream>
#include "discretemaths.h"
#include "test.h"

#define PI 3.141592653589793f

float RadsToDegs(float _Rads);

int main()
{
	TestEquals();

	int i;
	std::cin >> i;

	return 0;
}

float RadsToDegs(float _Rads)
{
	return _Rads * 180 / PI;
}