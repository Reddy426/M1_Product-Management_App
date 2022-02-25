#include "Productmanagement.h"
// SearchProduct function start

void SearchProduct()
{

    FILE *file;
    char code[50], product[50];
    int available;
    // if (file == NULL)
    // {
    //     printf("\t\t\t\tNo Product is Added.");
    //     options();
    // }
    printf("\v\t\t\t\t\tEnter \"end\" for back to menu.\n");
    printf("\v\t\t\t\t\tEnter the Product code to search: ");
    scanf("%s", code);
    if (strcmp(code, "end") == 0)
    {
        //system("clear");
        options();
    }
    //system("clear");
    printf("\v\v\t\t\t\t\t\tProduct information\n");
    printf("\t\t\t\t\t\t**********************\n");
    available = isCodeAvailable(code);
    if (available == 0)
    {
       // system("clear");
       /* system("clear");
        printf("\033[1;31m");
        printf("\033[0m");*/
         printf("\n\t\t\t\t\t\tProduct code is not found.\n");
    }
    else
    {
        file = fopen("Record.txt", "rb");
        while (fread(&item, sizeof(item), 1, file))
        {
            strcpy(product, item.product_code);
            if (strcmp(product, code) == 0)
            {
                printf("\n\t\t\t\t\t\tProduct Code:        %s", item.product_code);
                printf("\n\t\t\t\t\t\tName of Product:     %s", item.product_name);
                printf("\n\t\t\t\t\t\tRate of Product(RS): %d", item.rate);
                printf("\n\t\t\t\t\t\tProduct Company_name: %s\n", item.Company_name);
            }
        }
        fclose(file);
    }
} // Finished.