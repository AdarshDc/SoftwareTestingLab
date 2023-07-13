#include <stdio.h>

int main()
{
    int locks, stocks, barrels;
    float lprice = 45.0, sprice = 30.0, bprice = 25.0;
    int tlocks = 0, tstocks = 0, tbarrels = 0;

    printf("Enter the number of locks. To exit the loop, enter -1 for locks.\n");
    scanf("%d", &locks);

    while (locks != -1)
    {
        if (locks <= 0 || locks > 70)
        {
            printf("Value of locks not in the range 1..70\n");
        }
        else
        {
            int temp = tlocks + locks;
            if (temp > 70)
            {
                printf("New total locks = %d not in the range 1..70\n", temp);
            }
            else
            {
                tlocks = temp;
                printf("Total locks = %d\n", tlocks);
            }
        }

        printf("Enter the number of stocks and barrels\n");
        scanf("%d%d", &stocks, &barrels);

        if (stocks <= 0 || stocks > 80)
        {
            printf("Value of stocks not in the range 1..80\n");
        }
        else
        {
            int temp = tstocks + stocks;
            if (temp > 80)
            {
                printf("New total stocks = %d not in the range 1..80\n", temp);
            }
            else
            {
                tstocks = temp;
                printf("Total stocks = %d\n", tstocks);
            }
        }

        if (barrels <= 0 || barrels > 90)
        {
            printf("Value of barrels not in the range 1..90\n");
        }
        else
        {
            int temp = tbarrels + barrels;
            if (temp > 90)
            {
                printf("New total barrels = %d not in the range 1..90\n", temp);
            }
            else
            {
                tbarrels = temp;
                printf("Total barrels = %d\n", tbarrels);
            }
        }

        printf("\nEnter the number of locks. To exit the loop, enter -1 for locks.\n");
        scanf("%d", &locks);
    }

    printf("\nTotal locks = %d\nTotal stocks = %d\nTotal barrels = %d\n", tlocks, tstocks, tbarrels);

    float sales = lprice * tlocks + sprice * tstocks + bprice * tbarrels;
    printf("The total sales = %.2f\n", sales);
float comm ;
    if (sales > 0)
    {
        
        if (sales > 1000 && sales < 1800)
        {
            comm += 0.15 * (sales - 1000) + 100;
        }
        if (sales > 1800)
        {
            comm += 0.20 * (sales - 1800) + 220 ;
        }
       
        if (sales>0 && sales<1000)
        {
            comm = 0.10 * sales;
        }
         printf("The commission is = %.2f\n", comm);
    }
    else
    {   
        printf("There are no sales\n");
    }

    return 0;
}
