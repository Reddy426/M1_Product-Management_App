#include "Productmanagement.h"
// Delete function start
void deleteRecord()
{
     printf("\v\v\t\t\t\t\t\t\tDeleteProduct\n");
     printf("\t\t\t\t\t\t*********Enter the Details***************\n");
    FILE *file1, *file2;
    char code[50], product[50];
    int available;
    file1 = fopen("Record.txt", "rb");
    // if (file1 == NULL)
    // {
    //     printf("\t\t\t\tNo Product is Added.");
    //     options();
    // }
    ReadProduct();
    printf("\n\t\t\t\t\t\tEnter the Product code to delete: ");
    scanf("%s", code);
    //system("clear");
    available = isCodeAvailable(code);
    if (available == 0)
    {
        /*system("clear");
        printf("\033[1;31m");
        printf("\033[0m");*/
         printf("\n\v\t\t\t\t\t\t* Product is not available.\n");
    }
    else
    {

        file2 = fopen("tempfile.txt", "wb");
        while (fread(&item, sizeof(item), 1, file1))
        {
            strcpy(product, item.product_code);
            if (strcmp(product, code) != 0)
            {
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
        printf("\n\v\t\t\t\t\t\tProduct deleted sucessfully!!\n\n");
        fclose(file1);
        fclose(file2);
    }

} // Finished.
