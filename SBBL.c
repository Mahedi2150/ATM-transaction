#include <stdio.h>

int amount=1000, deposit, withdraw,choice, pin, k;

char transaction ;

void main()
{

    printf("\n\t\t********************   WELCOME TO SONAR BANGLA BANK LIMITED ATM SERVICE ******************\n");
    printf("\n\t\tENTER YOUR CARD\n");

    printf("\n\t\tENTER YOUR SECRET PIN NUMBER:");
    scanf("%d", &pin);
while(pin!=4545)
{


        printf("\t\tTHE PASSWORD IS INCORRECT\n");
        printf("\n\t\tPLEASE ENTER VALID PASSWORD:");
        scanf("%d", &pin);

}


    if (pin = 4545)
        do
        {
            printf("\n\t\t************************   Welcome to ATM Service Of SBBL ********************************\n");

            printf("\n\t\t1. Check Balance\n");
            printf("\n\t\t2. Withdraw Cash\n");
            printf("\n\t\t3. Deposit Cash\n");
            printf("\n\t\t4. Exit\n");
            printf("\n\t\t*****************************         THANK YOU          *********************************\n\n");
            printf("\t\tEnter your choice: ");
            scanf("%d", &choice);

            switch (choice)
            {
            case 1:
                printf("\n\t\t YOUR BALANCE IN BDT : %d\n", amount);
                break;
            case 2:
                printf("\n\t\t ENTER THE AMOUNT TO WITHDRAW : ");
                scanf("%d", &withdraw);
                if (withdraw >=amount )
                {
                    printf("\n\t\t INSUFFICENT BALANCE");
                }

                else
                {
                    amount = amount - withdraw;
                    printf("\n\t\t***PLEASE COLLECT CASH***\n");
                    printf("\n\t\t YOUR CURRENT BALANCE IS %d\n", amount);
                }
                break;
            case 3:
                printf("\n\t\t ENTER THE AMOUNT TO DEPOSIT :");
                scanf("%d", &deposit);
                amount = amount + deposit;
                printf("\t\tYOUR BALANCE IS %d\n", amount);
                break;
            case 4:
                printf("\n\t\t THANK U\n ");
                break;
            default:
                printf("\n\t\t INVALID CHOICE\n");
            }
            printf("\n\t\t DO U WISH TO HAVE ANOTHER TRANSCATION?(yes/no): ");

            fflush(stdin);
            scanf("%c", &transaction);
            if (transaction == 'n'|| transaction == 'N')
                k=1;
        }
        while(!k);
    printf("\n\t\t THANKS FOR USING OUR ATM SERVICE");

}
