#include<stdio.h>
#include<conio.h>
main()
{
	int digit = 0;
	while(digit<=9)
	{
		printf("\t%d \n",digit); ++digit;
	}
	printf("------------------\n");
	digit = 9;
	while(digit>=0)
	{
		printf("\t%d \n",digit); --digit;
	}
	getch();
	return 0;
}
