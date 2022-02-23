// This program only run on gcc compiler.
/*
Product management system to Add_Product, Search, Read, delete,Edit and Sell product
*/
/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>*/
#include "Productmanagement.h"
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
 ITEM;*/


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
        /* system("clear");
        printf("\033[1;31m");
        printf("\033[0m");*/
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
        /* system("clear");
        printf("\033[1;31m");
        printf("\033[0m");*/
         printf("\n\v\t\t\t\t\t\tRate be positive Integer.\n");
        printf("\t\t\t\t\tEnter rate of the product in positive integer: ");
    }

    return input;
}

#include "Productmanagement.h"
// Delete function start
/**
 * @brief Function to Deletebook
 * 
 * @return * void 
 */
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
    //loginAgain:
    //system("clear");

    printf("\v\v\t\t\tEnter username: ");
    scanf("%s", username);
    printf("\t\t\tEnter password: ");
    scanf("%s", password);
    while (1)
    {
        if ((strcmp(USERNAME, username)) == 0 && (strcmp(PASSWORD, password)) == 0)
        {
           /*system("clear");
            printf("\033[1;32m");
            printf("\033[0m");*/
            printf("\t\t\t\t\tLogin successfully!!");
            options();
        }
        else
        {
           /* system("clear");
            printf("\033[1;31m");
            printf("\033[0m");*/
            // goto loginAgain;
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
    //system("clear");
    return 0;
} // Finished

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
           // system("clear");
            AddProduct();
           // system("clear");
            break;
        case 2:
           // system("clear");
            ReadProduct();

            break;
        case 3:
           // system("clear");
            SearchProduct();
            break;
        case 4:
           // system("clear");
            deleteRecord();
            break;
        case 5:
            //system("clear");
            EditProduct();
            break;

        case 6:
            //system("clear");
            close_app();
            break;
        case 7:
           // system("clear");
            SellProduct();
            break;
        default:
            /*system("clear");
            printf("\033[1;31m");
            printf("\033[0m");*/
            printf("\t\t* Invalid choice.\n");
            break;
        } // Finished switch
    } 
}
