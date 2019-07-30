#include<stdio.h>
void main()
{
	int a=0,n,i=0,sam[10],out[10],j;
	printf("Enter the number of elements in an array\n");
	scanf("%d",&n);
	printf("Enter the value one by one\n");
	for(i=0;i<n;i++)
	{
scanf("%d",&sam[i]);
	}
	for(i=0;i<n;i++)
	{
	sam[i]=out[n-1];
	n--;
}
	for(i=0;i<n;i++)
	{
		printf("%d\n",out[i] );
	}
}