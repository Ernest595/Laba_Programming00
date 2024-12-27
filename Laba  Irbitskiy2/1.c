/*
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define INCORRECT_BASE 1
#define MEMORY_ALLOCATE_ERROR 2

int convert_decimal(int n,int r, char ** str);

int subtract(int a, int b)
{

	return add(a, add(~b, 1));

}


int add(int a, int b)
{
	int carry;
	while (b != 0)
	{
		carry = a & b;
		a = a ^ b;
		b = carry << 1;
	}

	return a;
}

int multiply(int a, int b)
{
	int result = 0;
	while (b != 0)
	{
		if (b & 1)
		{
			result += a;
		}
		a <<= 1;
		b >>= 1;
	}

	return result;
}


int main() {

	int n, r;
	char* ans;
	int err;
	printf("Enter number: ");
	scanf("%d", &n);
	printf("Enter base (2^r - enter r): ");
	scanf("%d", &r);

	err = convert_decimal(n, r, &ans);
	switch (err)
	{
		case 0:
					printf("Result: %s", ans);
					break;
				case INCORRECT_BASE: 
					printf("Incorrect base \n");
					break;
				case MEMORY_ALLOCATE_ERROR:
					printf("Memory not allocated \n");
				default:
				break;
	}
	free(ans);
	return 0;
	
}


int convert_decimal(int n, int r, char** str) {

	int base = 1 << r;
		char* res;
		int len = 0, j = 0, sign = 0;

		if (str = NULL) {
			return 0;

		}
	
		if (base < 2 || base > 32) {
			return INCORRECT_BASE;
		}

		if (n == 0) {
					*str = (char*)malloc(multiply(2,sizeof(char)));
					if (*str == NULL) { 
						return MEMORY_ALLOCATE_ERROR; 
					}
					*str[0] = '0';
					*str[1] = '\0';
					return 0;
				}
		len = add((log(abs(n)) / log(base)), 1);
		
		if (n < 0)
		{
			sign = 1;
			len=add(len,1);
			n = multiply(n,-1);
			
		}
		
		*str = (char*)malloc(multiply((add(len,1)), sizeof(char)));
		if (*str == NULL)
		{
			return MEMORY_ALLOCATE_ERROR;
		}
		res = *str;
		
			if (n < 0) { *res = '-'; }
		
			res =add(res,( len - sign));
			*res-- = 0;
		
			while (n > 0) {
				j = n & (subtract(base, 1));
				if (j < 10) {
					*res = add(j, '0');
				}
				else {
					*res = subtract( add(j , 'A'), 10);
				}
		
				n >>= r;
				res= subtract(res,1);
			}
			
			return 0;
		}


}


			*/
			





		


