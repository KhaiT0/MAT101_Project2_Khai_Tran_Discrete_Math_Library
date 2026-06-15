#include "test.h"
#include <iostream>

bool Equals(float _f1, float _f2, float _precision)
{
	return (_f1 < _f2 + _precision) && (_f1 > _f2 - _precision);
}

bool TestExpectedState(float _output, float _expected)
{
	return Equals(_output, _expected, 0.001f);
}

bool TestEquals()
{
	bool PassedAllTests = true;
	if (!Equals(0.0f, 0.0f, 0.001f))
	{
		std::cout << "Failed Test: 0.0 | 0.0: Expected TRUE" << std::endl;
		PassedAllTests = false;
	}
	else
	{
		std::cout << "Succeeded Test: 0.0 | 0.0: Expected TRUE" << std::endl;
	}

	if (!Equals(1.0f, 0.0f, 0.1f))
	{
		std::cout << "Failed Test: 1.0 | 0.0: Expected FALSE" << std::endl;
		PassedAllTests = false;
	}
	else
	{
		std::cout << "Succeeded Test: 1.0 | 0.0: Expected FALSE" << std::endl;
	}

	if (!Equals(0.0f, 1.0f, 0.1f))
	{
		std::cout << "Failed Test: 0.0 | 1.0: Expected FALSE" << std::endl;
		PassedAllTests = false;
	}
	else
	{
		std::cout << "Succeeded Test: 0.0 | 1.0: Expected FALSE" << std::endl;
	}

// if (!Equals(-2.0f, 0.08f, 0.1f))
// {
//		std::cout << "Failed Test: -2.0 | 0.08: Expected TRUE" << std::endl;
//		PassAllTests = false;
//	}
//	else
//	{
//		std::cout << "Succeeded Test: -2.0 | 0.08: Expected TRUE" << std::endl;
//	}
//
//	if (!Equals(20.0f, 20.1f, 0.1f))
//	{
//		std::cout << "Failed Test: 20.0 | 20.1: Expected TRUE" << std::endl;
//		PassAllTests = false;
//	}
//	else
//	{
//		std::cout << "Succeeded Test: 20.0 | 20.1: Expected TRUE" << std::endl;
//	}

	return PassedAllTests;
}