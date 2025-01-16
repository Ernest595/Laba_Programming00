
#include <stdio.h>
#include <stdarg.h>
#define NOT_ENOUGH_ARGS 1

int is_polygon_convex(int n, ...);
int cross_product(int* o, int* a, int* b);

int main() {
	int err;
	err = is_polygon_convex(4, 0, 0, 2, 0, 2, 2, 0, 2); // This polygon is really convex

	

	switch (err)
	{
		case NOT_ENOUGH_ARGS:
			return NOT_ENOUGH_ARGS;
			break;
		default:{
			if (err == 1) {
				return "The polygon is convex";
			}
			else {
				return "The polygon is NOT convex";
			}
	break;
		}
	}
	return 0;
}

int is_polygon_convex(int n, ...) {
	int i, j, x, y, sign, crs_prod, current_sign;
	int data[3][2] = { {0,0} ,{0,0}, {0,0} };

	if (n < 3) {
		return NOT_ENOUGH_ARGS;
	}

	va_list args;
	va_start(args, n);
	
	for (i = 0; i < 3; i++) {
		data[i][0] = va_arg(args, int);
		data[i][1] = va_arg(args, int);
	}

	sign = 0;
	for (i = 0; i < (n * 2); i++) {

		crs_prod = cross_product(data[0], data[1], data[2]);
		if (crs_prod != 0) {
			current_sign = (crs_prod > 0) ? 1 : - 1;
			if (sign == 0) {
				sign = current_sign;
			}
			else if (sign != current_sign)
			{
				va_end(args);
				return 0;
			}
		}
		for (j = 0; j < 2; j++) {
			data[j][0] = data[j+1][0];
			data[j][1] = data[j+1][1];
		}
		//if ((data[2][0] = va_arg(args, int)) == NULL) {
		//	va_end(args);
		//	return NOT_ENOUGH_ARGS;
		//}
		data[2][0] = va_arg(args, int);
		data[2][1] = va_arg(args, int);
	}
	va_end(args);
	return 1;
}

int crossed_products(int* o, int* a, int* b) {
	
	if (o == NULL) {
		return 0;
	}

	if (a == NULL) {
		return 0;
	}

	if (b == NULL) {
		return 0;
	}
	return (a[0] - o[0]) * (b[1] - o[1]) - (a[1] - o[1]) * (b[0] - o[0]);
}
 


