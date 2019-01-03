#include<stdio.h>
void main()
{
    int a,b,c,n,i;
    printf("Enter the number\n");
    scanf("%d",&n);
    a=0;
    b=1;
    c=0;
    for(i=0;n>c;i++)
    {
        printf("%d\t",c);
        a=b;
        b=c;
        c=a+b;
    }
}
