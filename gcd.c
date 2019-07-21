#include<stdio.h>
void main()
{
	int a,b,gcd=0,i;
	printf("Enter two values");
	scanf("%d%d",&a,&b);
	int max;
	if(a>b) max=b;
	else max=a;
    for(i=1;i<=max;i++)
    {
    	if(a%i==0 && b%i==0)
    	{
    		gcd=i;
    	}	
    }
    printf("The value of gcd is %d",gcd);
    int lcm;
    lcm=(a*b)/gcd;
    printf("The value of lcm is %d",lcm);
}