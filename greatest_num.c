/*Write a program to find greatest of four numbers entered by the user.*/
#include <stdio.h>
main()
{
	int num1,num2,num3,num4,greatest;
	printf("Enter the 4 numbers one by one: ");
	scanf("%d %d %d %d",&num1,&num2,&num3,&num4);
	greatest=num1;
	if(num2>greatest)
	greatest=num2;
	if(num3>greatest)
	greatest=num3;
	if(num4>greatest)
	greatest=num4;
	printf("The greatest number out of 4 numbers is: %d",greatest);
}
