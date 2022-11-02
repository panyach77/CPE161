#include<stdio.h>
#include<conio.h>
main(){int A;
	printf("Enter point : ");
	scanf("%d",&A);
	if((A<=100)&&(A>=80))
	 printf("%d point = A\n",A);
	else if((A<80)&&(A>=70))
	 printf("%d point = B\n",A);
	else if((A<70)&&(A>=60))
	 printf("%d point = C\n",A);
	else if((A<60)&&(A>=50))
	 printf("%d point = D\n",A);
	else if((A<50)&&(A>=0))
	 printf("%d point = F\n",A);
	else
	 printf("%d point = Error\n",A);
	getch();
	return 0;
}
