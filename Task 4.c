#include <stdio.h>
int main() 
{
    char name[100],email[100],phone[100];
    int valid=1,atSymbol=0;
    printf("Enter your name: ");
    scanf("%99s", name);
    int i;
    for(i=0; name[i]!='\0'; i++) 
	{
        if(!isalpha(name[i]) && name[i]!=' ') 
		{
            valid=0;
            printf("Invalid name. Only alphabetic characters and spaces are allowed.\n");
            break;
        }
    }
    if (valid) 
	{
        printf("Enter your email: ");
        scanf("%99s", email);  
        int i;
        for (i = 0;email[i]!= '\0';i++) 
		{
            if(email[i]=='@') 
			{
                atSymbol=1;
            } 
			else if(!isalnum(email[i]) && email[i] != '.' && email[i] != '_' && email[i] != '-') 
			{
                valid=0;
                printf("Invalid email. Only alphanumeric characters, periods, underscores, hyphens, and an @ symbol are allowed.\n");
                break;
            }
        }
        if(!atSymbol) 
		{
            valid=0;
            printf("Invalid email. Email must contain an @ symbol.\n");
        }
    }
    if(valid) 
	{
        printf("Enter your phone number: ");
        scanf("%19s", phone);  
        int i;
        for(i = 0; phone[i] != '\0'; i++) 
		{
            if(!isdigit(phone[i]) && phone[i]!=' '&&phone[i]!='-' && !(phone[i] == '+' && i == 0)) 
			{
                valid=0;
                printf("Invalid phone number. Only digits, spaces, hyphens, and an optional '+' are allowed.\n");
                break;
            }
        }
    }
    if(valid) 
	{  
        printf("Registration Successful!\n");
        printf("Name: %s\n", name);
        printf("Email: %s\n", email);
        printf("Phone: %s\n", phone);
    }
    return 0;
}