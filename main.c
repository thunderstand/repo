#include <stdio.h>

int suma(int, int);

int main()
{
	int a, b;
	printf("---Suma a doua numere---[deja peste 1.0]\na = ");
	scanf("%d", &a);
	printf("b = ");
	scanf("%d", &b);
	printf("a + b = %d\n", suma(a, b));
	return 0;
}
