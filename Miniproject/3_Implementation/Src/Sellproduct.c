#include "Productmanagement.h"
/**
 * @brief Function to Sellproduct
 * 
 * @return * void 
 */
void SellProduct()
{
    printf("\v\v\t\t\t\t\t\t\tSell Product\n");
    printf("\t\t\t\t\t\t************************\n");
    char x[4] = {0}; // for item code
    int q = 0, size = 0, i = 1;
    int total = 0, gtotal = 0;
    FILE *file;
    // if (file == NULL)
    // {
    //     printf("\t\t\tno product is found.");
    //     options();
    // }
    file = fopen("Record.txt", "r+b");
    rewind(file);
    // system("clear");
    // dbill();
    int availableC, availableQ;
    printf("\t\t\t\t\tEnter  \" end \" to finish input");
    int qty = item.quantity;
    while (1)
    {
        printf("                    ");
        printf("                    ");
        printf("\n\v\t\t\t\tEnter Item Code:");
        // printf("\n\v\vEnter Item Code:");
        scanf("%s", x);
        if (strcmp(x, "end") == 0)
        {
            system("clear");
            break;
        }
        availableC = isCodeAvailable(x);
        if (availableC == 0)
        {
           /* system("clear");
            printf("\033[1;31m");
            printf("\033[0m");*/
            printf("\n\v\t\t\t\t\t\t* no Product is found.\n");
            options();
        }

        printf("\t\t\t\tEnter Quantity:");
        scanf("%d", &q);
        // printf("item%d", item.quantity);

        // printf("beg%d", qty);
        qty = qty - q;
        if (qty < 0)
        {
           /*system("clear");
            printf("\033[1;31m");
            //system("clear");
           printf("\033[0m");*/
            printf("\n\t\t\t\t\t\t* Out of stock.\n");
            break;
        }

        // printf("qqqq%d", qty);

        // availableQ = isProductAvailable(q);
        // if (availableQ == 0)
        // {
        //     // system("clear");
        //     system("clear");
        //     printf("\033[1;31m");
        //     printf("\n\v\t\t\t\t\t\t* This product has 0 quantity.");
        //     printf("\033[0m");
        //     options();
        // }
        rewind(file);
        while (fread(&item, sizeof(item), 1, file))
        {
            if ((strcmp(item.product_code, x) == 0))
            {
                total = item.rate * q;
                printf("\n\t\t\t%d ", i);
                printf("\t\t\t%s ", item.product_name);
                printf("\t\t\t%d ", q);
                printf("\t\t\t%d ", item.rate);
                printf("\t\t\t%d ", total);
                gtotal = gtotal + total;
                size = sizeof(item);
                item.quantity = item.quantity - q;

                i++;
                fseek(file, -size, SEEK_CUR);
                fwrite(&item, sizeof(item), 1, file);
                break;
            }
        }
    }
    if (gtotal != 0)
    {
        // system("clear");
        printf("\n\v\t\t\t\t\t\tTOTAL AMOUNT = NRs. %d", gtotal);
    }
    fclose(file);
    // options();
}
// Read of the bill.
// void dbill()
// {
//     int i;
//     for (i = 1; i <= 10; i++)
//         printf("-");
//     printf(" HRITIK DEPARTMENTAL STORE");
//     for (i = 1; i <= 10; i++)
//         printf("-");
//     printf("\n\n");
//     printf("CUSTOMER'S BILL\n");
//     printf("SN.   Item Name     Quantity     Rate          Total\n");
// }
