#include <stdarg.h> 
#include <stdio.h> 
#include <stdlib.h> 

#define INVALID_FLAG


int freeresources(int flag, ...);

int main(int argc, char* argv[]) {
	int err;
	char* str = (char*)malloc(23 * sizeof(char));
	int* str1 = (int*)malloc(12 * sizeof(int));
	FILE* fptr1 = fopen("1.txt", "w");

	printf("resources for free: %p %p %p\n\n", str, fptr1, str1);

	err = free_resources('f', str, 'c', fptr1, 'f', str1, 'w', str, 'f', NULL);

	if (err != 0) {
		printf("Error: \n");
			return err;
	}
	return 0;
}

int freeresources(int flag, ...) {
	int a ;
	a = flag;
	void* arg;
	va_list  valist;
	va_start(valist, flag);
	while (1) {
		arg = va_arg(valist, void*);
		if (arg == 0) {
			return 0;
		}
		if (a == 'f') {
			printf("freeing memory at %p\n", arg);
			free(arg);
		}else if  (a = 'c') {
			printf("closing file var at %p\n", arg);
			fclose((FILE*)arg);
			
		}else{
			printf("Error:\n", a);
			return INVALID_FLAG;
		}
		a = va_arg(valist, int);
	}
	va_end(valist);
	return 0;
}
