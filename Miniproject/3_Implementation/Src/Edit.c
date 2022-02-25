#include "Productmanagement.h"
ITEM item;
void EditProduct()
{
    printf("\v\v\t\t\t\t\t\t\tEdit Product\n");
    printf("\t\t\t\t\t\t************************\n");
    FILE *file1, *file2;
    char code[50], product[50];
    int available;
    // if (file1 == NULL)
    // {
    //     printf("\t\t\t\tNo Product is Added.");
    //     options();
    // }
    printf("enter the Product code to Edit the record:");
    scanf("%s", code);
    available = isCodeAvailable(code);
    if (available == 0)
    {
       /* system("clear");
        printf("\033[1;31m");
        printf("\033[0m");*/
         printf("\n\v\t\t\t\t\t\t* no Product is found for Edit.\n");
    }
    else
    {
        file1 = fopen("Record.txt", "rb");
        file2 = fopen("tempfile.txt", "wb");
        while (fread(&item, sizeof(item), 1, file1))
        {
            strcpy(product, item.product_code);
            if (strcmp(product, code) != 0)
            {
                fwrite(&item, sizeof(item), 1, file2);
            }
            else
            {
                printf("\n Updating data for the privious product %s\n", code);
                // printf("Enter new product code: ");
                // scanf("%s", item.product_code);
                // fflush(stdin);
                printf("enter Product Name: ");
                scanf("%s", item.product_name);
                printf("Enter Product Rate: ");
                scanf("%d", &item.rate);
                printf("Enter Quantity: ");
                scanf("%d", &item.quantity);
                printf("enter Company name: ");
                scanf("19%s",item.Company_name);
                printf("\n\n");
                fwrite(&item, sizeof(item), 1, file2);
            }
        }
        fclose(file1);
        fclose(file2);
        file1 = fopen("Record.txt", "wb");
        file2 = fopen("tempfile.txt", "rb");
        while (fread(&item, sizeof(item), 1, file2))
        {
            fwrite(&item, sizeof(item), 1, file1);
        }
        fclose(file1);
        fclose(file2);
    }
} //Finished.
