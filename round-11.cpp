#include<stdio.h>
#include<conio.h>
main(){
	int x,y=10,f=5,c=2;
	int ten,coin,five,two;
	printf("input x :");
	scanf("%d",&x);
	ten = x/y;
	five = (x%y)/f;
	two = (x%f)/c;
	coin = (x%f)%c;
	printf(" All Change of %d \n",x);
	printf(" Number of Ten Bath is %d coins.\n",ten);
	printf(" Number of five Bath is %d coins.\n",five);
	printf(" Number of Two Bath is %d coins.\n",two);
	printf(" Number of One Bath is %d coins.\n",coin);
	getch();
	return 0;
}
