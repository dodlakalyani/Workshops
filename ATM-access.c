#include <stdio.h>
int main()
{
    int pin=1234,entered_pin;
    printf("Enter pin:");
    scanf("%d",&entered_pin);
    int balance=5000;
    int amt;
    if(entered_pin==pin)
    {
        printf("PIN verified\nYour balance is %d",balance);
        printf("\nEnter amount to withdraw:");
        scanf("%d",&amt);
        if(amt<=balance)
        {
            printf("%d withdrawn successfully",amt);
            printf("\nYour balance is %d",balance-amt);
        }
        else
        {
            printf("Insufficient balance");
        }
    }
    else
    {
        printf("invalid pin");
    }
    return 0;
}
