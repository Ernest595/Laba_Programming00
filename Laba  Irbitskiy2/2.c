#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

#define NOT_ENOUGH_ARGS 1
#define TOO_MANY_ARGS 2

int str_len(char* str);
char* str_rev(char* str);
char* str_cat(char* str1, char* str2);
void swap_str(char** a, char** b);
int randov_int(int min, int max);

int main(int argc, char* argv[]) {
	int err = 0;
	int len = 0;
	char f;
	int i = 0, j = 0, t = 0, seed;
	char* ptr;
	int left, right = 0;
	char change_value;
	char* str;

	if (argc < 3){
		err = NOT_ENOUGH_ARGS;
	}
	else if (argc > 3 && argv[1][1] != 'c') {
		err = TOO_MANY_ARGS;
	}
	else {

		f = argv[1][1];
	}
	switch (f)
	{
	case '1': {
		printf("String len: %d", str_len(argv[2]));
		break;
	}
	case 'r': {
		printf("Reverse string: %s", str_rev(argv[2]));
		break;
	}
	case 'u': {
		ptr = argv[2];
		len = str_len(argv[2]);

		for (i = 0; i < len; ++i) {
			if (*ptr >= 'a' && *ptr <= 'z' && i % 2 == 0)
			{
				*ptr -= 32;
			}
			++ptr;
		}

		printf("Changed string: %s", argv[2]);
		break;
	}
	case 'n': {
		len = str_len(argv[2]);

		char* str = (char*)malloc(len + 1 * sizeof(char));
		if (str == NULL) {
			printf("Memory not allocated =(\n");
		}
		memcpy(str, argv[2], len + 1);

		for (i = 0; i < len; i++) {
			t = 0;
			for (t = 0; t < len - 1 - i; t++) {

				if (isdigit(str[t])) {
					left = 1;
				}
				else if (isalpha(str[t])) {
					left = 2;
				}
				else {
					left = 3;
				}
				if (isdigit(str[t + 1])) {
					right = 1;
				}
				else if (isalpha(str[t + 1])) {
					right = 2;
				}
				else {
					right = 3;
				}

				if (left > right) {
					change_value = str[t];
					str[t] = str[1 + t];
					str[1 + t] = change_value;
				}
			}
		}
		printf("Changed string: %s", str);
		free(str);
		break;
	}
	

	
		
	




	

	






}