#include<stdio.h>
int main()
{
	int a ,b,sum,sub,mul,que,rem,n;
	a = 20;
	b = 5 ;
	sum = (a+b);
	sub = (a-b);
	mul = (a*b);
    que = (a/b);
	rem = (a%b);
	n   = (sum+sub+mul+que+rem);
	printf("sum of %d and %d is                :%d\n",a, b, sum);
	printf("subraction of %d and %d is:        :%d\n",a,b,sub);
	printf("multiplication of %d and %d is     :%d\n",a,b,mul);
	printf("quotient of %d and %d is           :%d\n",a,b,que);
	printf("remainder of %d and %d is          :%d\n",a,b,rem);
	printf("sum of all arthametic operations is:%d",n);
	
}
