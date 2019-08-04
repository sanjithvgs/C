#include<stdio.h>
float average(int mark[]);
int main()
{
	int mark[11]={10,20,30,40,50};
	float avg=0;
	avg=average(mark);
	printf("The average of the student is %f\n",avg);
	return 0;
}
float average(int mark[])
{
	int sum=0,i;
	float avg=0;
	for(i=0;i<5;i++)
	{
		sum+=mark[i];
	}
    avg=(sum/5);
    return avg;

}