#include "stdio.h"
#include <conio.h>
#include <time.h>

int a()
{
	return 5;
}
int b()
{
	int b=a();
	return (b);
}

main()
{
	printf("%d",b());
}
