#include <stdio.h>

int suma(int, int);

int main()
{
	int a, b;
	printf("a = ");
	scanf("%d", &a);
	printf("b = ");
	scanf("%d", &b);
	printf("%d\n", suma(a, b));
	return 0;
}
