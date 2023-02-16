 #include <stdio.h>
#include <limits.h>

int main(void) {

    printf("char: %lu bytes\n", sizeof(char));
    printf("short: %lu bytes\n", sizeof(short));
    printf("int: %lu bytes\n", sizeof(int));
    printf("long: %lu bytes\n", sizeof(long));
    printf("float: %lu bytes\n", sizeof(float));
    printf("double: %lu bytes\n", sizeof(double));

    return 0; 
} 
/* Output example 
char: 1 bytes 
short: 2 bytes 
int: 4 bytes 
long: 8 bytes 
float: 4 bytes 
double: 8 bytes */
