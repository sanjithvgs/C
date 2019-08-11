#include<stdio.h>
#include <string.h>
void main()
{
	int i,s;
	char str[20];
	char out[20];
	int a=0;
	printf("Enter the string\n");
	scanf("%s",&str);
	s=strlen(str);
	for(i=0;i<s;i++)
	{
		if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u')
		{
           
           out[a]=str[i];
           a++;

		}
	}
	out[a]='\0';
	printf("%s",out);
	

}