#include "Productmanagement.h"
//function to Add_Product the product to the file.
void AddProduct()
{
    printf("\v\v\t\t\t\t\t\t\tAdd Product\n");
    printf("\t\t\t\t\t\t************Enter the product detail************\n");
    FILE *file;
    char code[50];
    char x[4] = {0};
    int a;
    file = fopen("Record.txt", "ab");
    printf("\n\t\t\t\t\tEnter the \" end \" to exit for here");
    printf("\n\t\t\t\t\tEnter Product code: ");
    scanf("%s", code);
    // scanf("%s", x);
    if (strcmp(code, "end") == 0)
    {
       // system("clear");
        options();
    }
    int available;
    available = isCodeAvailable(code); // return 1 if code id found and return 0 if the code is not available.
    if (available == 1)
    {
        /*system("clear");
        printf("\033[1;31m");
        printf("\033[0m");*/
        printf("\n\v\t\t\t\t\t\t* Product is already there.\n");
        options();
    }
    strcpy(item.product_code, code); // copy the code to the structure item
    // fflush(stdin);
    // printf("%s", item.product_code);
    // printf("%s", code);
    printf("\t\t\t\t\tEnter Product Name: ");
    scanf("%s", item.product_name);
    printf("\n\t\t\t\t\tEnter Product Rate: ");
    a = check_rate();
    item.rate = a;
    printf("\n\t\t\t\t\tEnter Quantity: ");
    scanf("%d", &item.quantity);
    printf("\n\t\t\t\t\tEnter Company_names: ");
    scanf(" %s", item.Company_name);

    // writing structure to a file
    fwrite(&item, sizeof(item), 1, file);
    fclose(file);

} // Finished.
