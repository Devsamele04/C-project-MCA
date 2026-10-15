
#include <stdio.h>

int main()
{
    int accountNo = 12345;
    int pin = 1234;
    int enteredAccount, enteredPin;
    int attempts = 0, login = 0;
    int choice, receiverAccount;
    int accountStatus = 1;

    float balance = 5000;
    float amount;

    /* Login Authentication */
    printf("===== BANKING SYSTEM =====\n");

    while (attempts < 3)
    {
        printf("\nEnter Account Number: ");
        if (scanf("%d", &enteredAccount) != 1)
        {
            printf("Invalid input!\n");
            return 0;
        }

        printf("Enter PIN: ");
        if (scanf("%d", &enteredPin) != 1)
        {
            printf("Invalid input!\n");
            return 0;
        }

        if (enteredAccount == accountNo && enteredPin == pin)
        {
            printf("\nLogin Successful!\n");
            login = 1;
            break;
        }
        else
        {
            attempts++;
            printf("Incorrect Account Number or PIN!\n");
            printf("Attempts remaining: %d\n", 3 - attempts);
        }
    }

    if (login == 0)
    {
        printf("\nAccess Denied! Too many incorrect attempts.\n");
        return 0;
    }

    /* Banking Menu */
    do
    {
        printf("\n===== BANKING MENU =====\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Transfer Money\n");
        printf("5. Account Information\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1)
        {
            printf("Invalid input! Program closed.\n");
            return 0;
        }

        switch (choice)
        {
        case 1:
            printf("\nCurrent Balance: Rs. %.2f\n", balance);
            break;

        case 2:
            printf("\nEnter deposit amount: Rs. ");
            if (scanf("%f", &amount) != 1)
            {
                printf("Invalid amount!\n");
                return 0;
            }

            if (amount <= 0)
            {
                printf("Amount must be greater than zero!\n");
            }
            else
            {
                balance = balance + amount;
                printf("Deposit Successful!\n");
                printf("Updated Balance: Rs. %.2f\n", balance);
            }
            break;

        case 3:
            printf("\nEnter withdrawal amount: Rs. ");
            if (scanf("%f", &amount) != 1)
            {
                printf("Invalid amount!\n");
                return 0;
            }

            if (amount <= 0)
            {
                printf("Amount must be greater than zero!\n");
            }
            else if (amount > balance)
            {
                printf("Insufficient Balance!\n");
            }
            else
            {
                balance = balance - amount;
                printf("Withdrawal Successful!\n");
                printf("Updated Balance: Rs. %.2f\n", balance);
            }
            break;

        case 4:
            printf("\nEnter receiver account number: ");

            if (scanf("%d", &receiverAccount) != 1)
            {
                printf("Invalid account number!\n");
                return 0;
            }

            if (receiverAccount <= 0)
            {
                printf("Invalid receiver account number!\n");
                break;
            }

            if (receiverAccount == accountNo)
            {
                printf("Cannot transfer to your own account!\n");
                break;
            }

            printf("Enter transfer amount: Rs. ");

            if (scanf("%f", &amount) != 1)
            {
                printf("Invalid amount!\n");
                return 0;
            }

            if (amount <= 0)
            {
                printf("Amount must be greater than zero!\n");
            }
            else if (amount > balance)
            {
                printf("Insufficient Balance!\n");
            }
            else
            {
                balance = balance - amount;
                printf("Transfer Successful!\n");
                printf("Receiver Account: %d\n", receiverAccount);
                printf("Transferred: Rs. %.2f\n", amount);
                printf("Remaining Balance: Rs. %.2f\n", balance);
            }
            break;

        case 5:
            printf("\n===== ACCOUNT INFORMATION =====\n");
            printf("Account Number: %d\n", accountNo);
            printf("Account Status: %s\n",
                   accountStatus == 1 ? "Active" : "Inactive");
            printf("Current Balance: Rs. %.2f\n", balance);
            break;

        case 6:
            printf("\nThank you for using our Banking System!\n");
            break;

        default:
            printf("Invalid choice! Please select 1 to 6.\n");
        }

    } while (choice != 6);

    return 0;
}
