
#include "Productmanagement.h"
// This program only run on gcc compiler.
/*
Product management system to Add_Product, Read, delete,Edit and Sell product*/

#define USERNAME "Admin"
#define PASSWORD "Admin123"

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
