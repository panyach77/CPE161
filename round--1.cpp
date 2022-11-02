#include<stdio.h>
#include<conio.h>
main()
{
	int i=1;
	while (i<=10){
	float radius,area;
	printf("Input your radius : ");
	scanf("%f",&radius);
	area = 3.14159*radius*radius;
	printf("Area = %f",area);
	i++;
	if (i!=1)
	 {
	 	printf("\n");
	 }}
}
