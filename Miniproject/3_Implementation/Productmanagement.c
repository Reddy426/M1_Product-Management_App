
#include "Productmanagement.h"
// This program only run on gcc compiler.
/*
Product management system to Add_Product, Read, delete,Edit and Sell product
*/
/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>*/

#define USERNAME "Admin"
#define PASSWORD "Admin123"
/*typedef struct items
{
    char product_code[50];
    char product_name[50];
    int rate;
    int quantity;
    char Company_name[30];

}
 ITEM;
*/
ITEM item;

// Operate to see in the given product code is available
int isCodeAvailable(char code[])
{
    FILE *file;
    file = fopen("Record.txt", "r");
    while (!feof(file))
    {
        fread(&item, sizeof(item), 1, file);
        if (strcmp(code, item.product_code) == 0)
        {
            fclose(file);
            return 1;
        }
    }
    fclose(file);
    return 0;
}

// Function to check the quentity during the Sell product.
int isProductAvailable(int quantity)
{
    FILE *file;
    file = fopen("Record.txt", "r");
    while (!feof(file))
    {
        fread(&item, sizeof(item), 1, file);
        if (item.quantity >= quantity)
        {
            fclose(file);
            return 1;
        }
    }
    fclose(file);
    return 0;
}

// function to check the choice is integer or not
int get_int(int input)
{
    char ch;
    while (scanf("%d", &input) != 1)
    {
        while ((ch = getchar()) != '\n')
        {
        }

        printf("\n\v\t\t\t\t\t\tMust be positive integer.\n");
        printf("\t\t\t\t\tEnter Positive integer value, such as 1,2,3,4: ");
    }

    return input;
}

int check_rate()

{
    int input;
    char ch;
    while (scanf("%d", &input) != 1)
    {
        while ((ch = getchar()) != '\n')
        {
        }

         printf("\n\v\t\t\t\t\t\tRate be positive Integer.\n");
        printf("\t\t\t\t\tEnter rate of the product in positive integer: ");
    }

    return input;
}

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

    if (strcmp(code, "end") == 0)
    {

        options();
    }
    int available;
    available = isCodeAvailable(code); // return 1 if code id found and return 0 if the code is not available.
    if (available == 1)
    {

        printf("\n\v\t\t\t\t\t\t* Product is already there.\n");
        options();
    }
    strcpy(item.product_code, code); // copy the code to the structure item

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

// SearchProduct function start
void SearchProduct()
{

    FILE *file;
    char code[50], product[50];
    int available;

    printf("\v\t\t\t\t\tEnter \"end\" for back to menu.\n");
    printf("\v\t\t\t\t\tEnter the Product code to search: ");
    scanf("%s", code);
    if (strcmp(code, "end") == 0)
    {

        options();
    }
    //system("clear");
    printf("\v\v\t\t\t\t\t\tProduct information\n");
    printf("\t\t\t\t\t\t**********************\n");
    available = isCodeAvailable(code);
    if (available == 0)
    {

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

// Delete function start

void deleteRecord()
{
     printf("\v\v\t\t\t\t\t\t\tDeleteProduct\n");
     printf("\t\t\t\t\t\t*********Enter the Details***************\n");
    FILE *file1, *file2;
    char code[50], product[50];
    int available;
    file1 = fopen("Record.txt", "rb");

    ReadProduct();
    printf("\n\t\t\t\t\t\tEnter the Product code to delete: ");
    scanf("%s", code);

    available = isCodeAvailable(code);
    if (available == 0)
    {

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

// Function to delete the Products.
void EditProduct()
{
    printf("\v\v\t\t\t\t\t\t\tEdit Product\n");
    printf("\t\t\t\t\t\t************************\n");
    FILE *file1, *file2;
    char code[50], product[50];
    int available;

    printf("enter the Product code to Edit the record:");
    scanf("%s", code);
    available = isCodeAvailable(code);
    if (available == 0)
    {

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

void login()
{
    printf("---------------------------------------------------------------------------------------------------------\n");
	printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
	printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
	printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
	printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
	printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
	printf("|\t\t\t\t==================================\t\t\t\t\t\t|\n");
	printf("|\t\t\t\t|\t     WELCOME TO \t |\t\t\t\t\t\t|\n");
	printf("|\t\t\t\t|\tPRODUCT MGMT SYSTEM\t |\t\t\t\t\t\t|\n");
	printf("|\t\t\t\t==================================\t\t\t\t\t\t|\n");
	printf("|\t\t\t\t            Address      \t\t\t\t\t\t\t|\n");
	printf("|\t\t\t\t\t     Number\t\t\t\t\t\t\t\t|\n");
	printf("|\t\t\t\t      \"WE BELIEVE IN QUALITY\"\t\t\t\t\t\t\t|\n");
	printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
	printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
	printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
	printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
	printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
	printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
	printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
    printf("---------------------------------------------------------------------------------------------------------\n");

    printf("\v\v\t\t\t\t\t\t\tLogin \n");
    printf("\t\t\t\t\t\t************************\n");
    char username[15], password[10];

    printf("\v\v\t\t\tEnter username: ");
    scanf("%s", username);
    printf("\t\t\tEnter password: ");
    scanf("%s", password);
    while (1)
    {
        if ((strcmp(USERNAME, username)) == 0 && (strcmp(PASSWORD, password)) == 0)
        {

            printf("\t\t\t\t\tLogin successfully!!");
            options();
        }
        else
        {

            printf("\n\t\t\tsorry you enter the worng information.\n");
            printf("\n\t\t\tPlease try again.\n");
            login();
            break;
        }
    }
} //Finished login function

// start main funcion
int main()
{
    login();

    return 0;
} // Finished

void SellProduct()
{
    printf("\v\v\t\t\t\t\t\t\tSell Product\n");
    printf("\t\t\t\t\t\t************************\n");
    char x[4] = {0}; // for item code
    int q = 0, size = 0, i = 1;
    int total = 0, gtotal = 0;
    FILE *file;

    file = fopen("Record.txt", "r+b");
    rewind(file);

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

            printf("\n\v\t\t\t\t\t\t* no Product is found.\n");
            options();
        }

        printf("\t\t\t\tEnter Quantity:");
        scanf("%d", &q);

        qty = qty - q;
        if (qty < 0)
        {

            printf("\n\t\t\t\t\t\t* Out of stock.\n");
            break;
        }


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

        printf("\n\v\t\t\t\t\t\tTOTAL AMOUNT = NRs. %d", gtotal);
    }
    fclose(file);
    // options();
}


void options()
{
    printf("\v\n\v\t\t\t\t\t\t\t\t--Hritik Departmental Store--\n");
    printf("\t\t\t\t\t\t\t\t**********************************\n");
    int num, choice;
    while (1)
    {
        printf("\n\t\t\t\t\t\t\t\t\t1. Add_Product\n\t\t\t\t\t\t\t\t\t2. ReadProduct");
        printf("\n\t\t\t\t\t\t\t\t\t3. SearchProduct\n\t\t\t\t\t\t\t\t\t4. Delete\n\t\t\t\t\t\t\t\t\t5. Edit");
        printf("\n\t\t\t\t\t\t\t\t\t6. close\n\t\t\t\t\t\t\t\t\t7. Sell product\n\n");
        printf("\t\t\t\t\t\t\t\t\tEnter your choice: ");
        choice = get_int(num);
        switch (choice)
        {
        case 1:

            AddProduct();

            break;
        case 2:

            ReadProduct();

            break;
        case 3:

            SearchProduct();
            break;
        case 4:

            deleteRecord();
            break;
        case 5:

            EditProduct();
            break;

        case 6:

            close_app();
            break;
        case 7:

            SellProduct();
            break;
        default:

            printf("\t\t* Invalid choice.\n");
            break;
        } // Finished switch
    }
}
