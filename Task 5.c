#include<stdio.h>
int main()
{
	int num[10],size,i,max,min;
	printf("Enter size of array: ");
	scanf("%d",&size);
	printf("Enter value of array: ");
	for(i=0;i<size;i++)
	{
		scanf("%d", &num[i]);
	}
	max=num[0];
	for(i=0;i<size;i++)
	{
		if(num[i]>max)
		{
			max=num[i];
		}
	}
	printf("Maximum value of array is: %d\n", max);

	min=num[0];
	for(i=0;i<size;i++)
	{
		if(num[i]<max)
		{
			min=num[i];
		}
	}
	printf("Minimum value of array is: %d", min);
	return 0;
}