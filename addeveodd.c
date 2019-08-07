#include<stdio.h>
void main()
{
	int n,i,a=0,b=0,c=0;
	printf("Enter number of elements\n");
	scanf("%d",&n);
	int arr[n-1];
	printf("Enter the elements one by one\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
         a=a+arr[i];
		}
		else
		{
			b=b+arr[i];
		}
	}
c=a-b;
printf("The value is %d\n", c);

}