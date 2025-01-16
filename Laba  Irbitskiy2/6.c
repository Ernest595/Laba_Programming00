/*
#include <stdio.h>
#include <stdarg.h>
#define NOT_ENOUGH_ARGS 2

double polynomial_calculate(double à, int p, ...);

int main() {
	double err;
	err = polynomial_calculate(2.0, 2, 2.0, 2.0, 2.0);

	switch ((int)err)
	{
		case NOT_ENOUGH_ARGS:
			printf("Not enough arguments");
			break;
		case 1:
			printf("The degree must be greater than 1");
			break;
		default:
			printf("Result: %.2f", err);
			break;
	}
	return 0;
}

double polynomial_calculate(double à, int p, ...) {
	int i, a_0, a;
	double res;

	if (p < 1) {
		return 1;
	}

	va_list args;
	va_start(args, p);

	a_0 = va_arg(args, double);
	res = (double) a_0 * à;
	for (i = 0; i < p; i++) {
		if ((a = va_arg(args, double)) {
			return NOT_ENOUGH_ARGS;
		}
		res += a;
		if (p - i != 1) {
			res *= à;
		}		
	}

	return res;
}
*/