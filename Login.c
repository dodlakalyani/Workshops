#include <stdio.h>
#include<string.h>
int main()
{
    char username[10], password[10];
    printf("Enter username:");
    scanf("%s",username);
    if(strcmp(username,"admin")==0)
    {
        printf("Enter password:");
        scanf("%s",password);
        if(strcmp(password,"1234")==0)
        {
            printf("Access granted");
        }
        else
        {
            printf("wrong password");
        }
    }
    else
    {
        printf("Wrong username");
    }
    return 0;
}
