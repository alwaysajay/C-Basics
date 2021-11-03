#include<stdio.h>
void main()
{
	int hr,t,min;
	t= 550;
	hr= t/60;
	min=t%60;
	printf("%d time is %d hr %d min",t,hr,min);
}
