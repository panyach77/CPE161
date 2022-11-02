#include<stdio.h>
#include<conio.h>
//5.2 -5.2.1 5.2.2 p.24
main()
{
	int A;
	printf("Enter the integer number : ");
	scanf("%d",&A); 
	if(A%2==1) 
			printf("odd");
	else
		printf("even");
	getch();
	return 0;
}
