#include<stdio.h>
#include<conio.h>
main(){
	int num1,num2,ans;
	char mark;
	printf("Enter Number 1(int) : ");
	scanf("%d",&num1);
	printf("Enter Number 2(int) : ");
	scanf("%d",&num2);
	printf("Enter Mark : ");
	mark=getch();
	switch(mark)
	{
		case ('+'):
			ans=num1+num2;
			printf("%c\n",mark);
			break;
		case ('-'):
			ans=num1-num2;
			printf("c\n",mark);
			break;
		case ('*'):
			ans=num1*num2;
			printf("%c\n",mark);
			break;
		case ('/'):
			ans=num1/num2;
			printf("%c\n",mark);
			break;
		case ('%'):
			ans=num1%num2;
			printf("%c\n",mark);
			break;
		default: 
			printf("Please Enter only + or - or / or % \n");
	}
	printf("ans = %d",ans);
	getch();
	return 0;
}
