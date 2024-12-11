#include <stdio.h>
/*

int swap_bytes(int n, int i, int j);


int main() {
    int n, i, j;
    printf("Input a number: ");
    scanf(&n);
    printf("Input first byte number: ");
    scanf(&i);
    printf("Input second byte number: ");
    scanf(&j);
    n = swap_bytes(n, i, j);
    printf("New number: %d\n", n);
    return 0;
}


int swap_bytes(int n, int i, int j) {
    char* bytes_array = (char*)&n;
    char buf = bytes_array[i];
    bytes_array[i] = bytes_array[j];
    bytes_array[j] = buf;
    return n;
}
*/