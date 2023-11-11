#include <iostream>

#include "add_sub.h"
#include "mul_div.h"

int main()
{
	std::cout << "Hello World" << std::endl;

	int a = 20, b = 10;

	printf("a + b = %d\n", add(a, b));
	printf("a - b = %d\n", sub(a, b));
	printf("a * b = %d\n", mul(a, b));
	printf("a / b = %d\n", div_yg(a, b));

	return 0;
}