#include<stdio.h>
int main()
{
	int year,month,days,x,y;
	printf("enter total number of days:\n");
	scanf("%d",&days);
	year=days/365;
	x=days%365;
	month=x/30;
	y=x%30;
	printf("years=%d \nMonths= %d \nand Remaining days =%d \n",year,month,y);
	return 0;
}
