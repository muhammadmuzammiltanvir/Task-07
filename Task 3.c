#include<stdio.h>
int main()
{
	int num[5],i;
	printf("Enter element no: ");
	for(i=0;i<=5;i++)
	{
		scanf("%d",&num[i]);
	}
	printf("\nElements in reverse oder: ");
	for(i=5;i>=0;i--)
	{
		printf("%d ",num[i]);
	}
	return 0;
}