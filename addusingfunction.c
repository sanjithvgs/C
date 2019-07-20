#include<stdio.h>
int main()
{
	int s,a,b,c;
	int sum();
	printf("Enter three numbers to add");
	scanf("%d%d%d",&a,&b,&c);
	s=sum(a,b,c);
	printf("%d\n",s );

}
int sum(i,j,k)
int i,j,k;
{
	int x;
	x=i+j+k;
	return(x);

}
