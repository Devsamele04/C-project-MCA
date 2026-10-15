
#include <stdio.h>

int main()
{
    int customerNo, units, choice;
    char name[50], type, subsidyChoice;
    float energyCharge, fixedCharge, surcharge, subsidy, total;

    do
    {
        printf("\n===== ELECTRICITY BILL CALCULATOR =====\n");
        printf("1. Calculate Bill\n");
        printf("2. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter customer number: ");
            scanf("%d", &customerNo);

            printf("Enter customer name: ");
            scanf(" %49[^\n]", name);

            printf("Enter type (D = Domestic, C = Commercial): ");
            scanf(" %c", &type);

            printf("Enter units consumed: ");
            scanf("%d", &units);

            if (units < 0)
            {
                printf("Invalid units!\n");
                break;
            }

            if (type == 'D' || type == 'd')
            {
                if (units <= 100)
                    energyCharge = units * 3;
                else if (units <= 200)
                    energyCharge = 100 * 3 + (units - 100) * 5;
                else if (units <= 300)
                    energyCharge = 100 * 3 + 100 * 5 + (units - 200) * 7;
                else
                    energyCharge = 100 * 3 + 100 * 5 + 100 * 7 + (units - 300) * 9;

                fixedCharge = 100;
            }
            else if (type == 'C' || type == 'c')
            {
                if (units <= 100)
                    energyCharge = units * 5;
                else if (units <= 200)
                    energyCharge = 100 * 5 + (units - 100) * 7;
                else if (units <= 300)
                    energyCharge = 100 * 5 + 100 * 7 + (units - 200) * 10;
                else
                    energyCharge = 100 * 5 + 100 * 7 + 100 * 10 + (units - 300) * 12;

                fixedCharge = 250;
            }
            else
            {
                printf("Invalid customer type!\n");
                break;
            }

            surcharge = 0;
            subsidy = 0;

            if (energyCharge > 2000)
                surcharge = energyCharge * 0.05;

            if ((type == 'D' || type == 'd') && units <= 100)
            {
                printf("Eligible for subsidy? (Y/N): ");
                scanf(" %c", &subsidyChoice);

                if (subsidyChoice == 'Y' || subsidyChoice == 'y')
                    subsidy = 50;
            }

            total = energyCharge + fixedCharge + surcharge - subsidy;

            printf("\n======= ELECTRICITY BILL =======\n");
            printf("Customer Number : %d\n", customerNo);
            printf("Customer Name   : %s\n", name);
            printf("Units Consumed  : %d\n", units);
            printf("Energy Charge   : Rs. %.2f\n", energyCharge);
            printf("Fixed Charge    : Rs. %.2f\n", fixedCharge);
            printf("Surcharge       : Rs. %.2f\n", surcharge);
            printf("Subsidy         : Rs. %.2f\n", subsidy);
            printf("Total Payable   : Rs. %.2f\n", total);
            printf("================================\n");
            break;

        case 2:
            printf("Thank you!\n");
            break;

        default:
            printf("Invalid menu choice!\n");
        }

    } while (choice != 2);

    return 0;
}
