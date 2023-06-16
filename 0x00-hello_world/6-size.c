#include <stdio.h>
int main()
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;
	//sizeof the variable
	printf("Size of int: %zu bytes\n", sizeof(a));
        printf("Size of float: %zu bytes\n", sizeof(b));
        printf("Size of double: %zu bytes\n", sizeof(c));
        printf("Size of char: %zu byte\n", sizeof(d));
	printf("Size of char: %zu byte\n", sizeof(e));

	return (0);
}	
