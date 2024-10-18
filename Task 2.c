#include<stdio.h>
int main()
{
	int x,n=9,found=0;
	int arr[9]={1,2,3,4,5,6,7,8,9};
	printf("Enter the element to search for: ");
	scanf("%d",&x);
	
	for(int i=0;i<n;i++)
	{
		if(arr[i]==x)
		{
		
		found=1;
		printf("Element found at position %d\n",i+1);
		break;
		}	
	}
	if(!found)
	{
		printf("Element not found in array\n");
	}
	return 0;
}