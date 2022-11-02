#include<stdio.h>
#include<conio.h>
main(){
	int ix=5;
	unsigned int ux =5;
	long int lx=5;
	printf("ix = %d\n",ix);
	printf("ux = %u\n",ux);
	printf("lx = %ld\n",lx);
	printf("5000 times of ix = %ld\n",ix*50000);
	printf("5000 times of ux = %lu\n",ux*50000);
	printf("500000 times of ux = %lu\n",ux*5000000);
	printf("500000 times of lx = %ld\n",lx*5000000);
	getch();
	return 0;
}
