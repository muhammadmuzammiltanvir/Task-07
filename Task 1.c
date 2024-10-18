#include <stdio.h>
int main()
{
	int num[5], sum=0;
	for(int i=0;i<5;i++)
	{
		printf("Enter element no %d: ",i+1);
		scanf("%d",&num[i]);
		sum+=num[i];
	}
	printf("The sum is: %d",sum);
	return 0;
}