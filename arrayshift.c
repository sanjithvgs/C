#include<stdio.h>
void main()
{
	int n;
	printf("Enter the number of array elements\n");
    scanf("%d",&n);
	int arr[n+1],i,j,m;
	
    printf("Enter the array elements one by one\n");
    for(i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
    printf("Enter the number of shift");
    scanf("%d",&m);

    for(j=0;j<m;j++)
       
    {
    		arr[n]=arr[0];
    		
    		for (i = 0; i < n; i++)
    	{

    		arr[i]=arr[i+1];
    	}
       
        
    }
    
    for (i = 0; i < n; i++)
    {
    	printf("%d\n",arr[i] );
    }
}
