#include <stdio.h>
int main() 
{
    int i,days[7],totalTemp=0,ext=0; 
    printf("Enter temperature for 7 days: \n");
    for(i=0;i<7;i++) 
	{ 
        printf("Day %d: ",i+1); 
        scanf("%d", &days[i]); 
        totalTemp+= days[i]; 
        if(days[i]>40 || days[i]<0) 
		{
            ext=days[i];
        }
    }
    int avgTemp=totalTemp/7;
    printf("Extreme weather on day %d: %d\n",i+1,ext);
    printf("The average temperature for 7 days is: %d\n", avgTemp);
    
    return 0; 
}