#include "Productmanagement.h"
void ReadProduct()
{
    printf("\v\v\t\t\t\t\t\t\tAvailable Products\n");
    printf("\t\t\t\t\t\t***************************\n");
    FILE *file;
    int count = 0;
    file = fopen("Record.txt", "rb");
    printf("\t\t\t------------------------------------------------------------------------------------------------------\n");
    printf("\t\t\tCODE\t||\tNAME\t||\tRATE\t||\tQUANTITY\t||\tCompany_name\n");
    printf("\t\t\t------------------------------------------------------------------------------------------------------\n");
    if (file == NULL)
    {
        printf("\t\t\t\tNo Product is Added.");
        options();
    }
    while (fread(&item, sizeof(item), 1, file))
    {
        printf("\t\t\t%s\t||\t%s\t||\t%d\t||\t %d\t\t||\t %s \n", item.product_code, item.product_name, item.rate, item.quantity, item.Company_name);
        count++;
    }
    printf("\t\t\t------------------------------------------------------------------------------------------------------\n");
    if (count == 0)
    {
        /*system("clear");
        printf("\033[1;31m");
        printf("\033[0m");*/
        printf("\n\v\t\t\t\t\t\t* Product is not available.\n");
    }
    fclose(file);
} // Finished.

void close_app()
{
    char choice;
    printf("\n Do you want to close the applications?(Y/y)");
    scanf("%s", &choice);
    if (choice == 'Y' || choice == 'y')
    {
        exit(0);
    }
}