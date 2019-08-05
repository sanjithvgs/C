#include<stdio.h>
int sum(int x,int y)
{
	return x+y;
}
int main(){
	int (*funcp)(int,int);
	funcp=sum;
	int a,b,c;
	printf("Enter two numbers for addition\n");
	scanf("%d%d",&a,&b);
	c=funcp(a,b);
	printf("The addition of two numbers are  %d:",c);
	return 0;

}