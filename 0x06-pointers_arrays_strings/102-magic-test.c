#include <stdio.h>
/**
 * main - entry point
 * Return: always 0
 */
int main(void)
{
int n;
int a[5];
int *p;

a[2] = 1024;
p = &n;

printf("%p\n", &a[2]);
printf("%p\n", p);
for (int i = 0; i < 5; i++)
	printf("%p\n", p + (i + 1));

printf("a[2] = %d\n", a[2]);
return (0);
}
