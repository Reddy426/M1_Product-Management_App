# Table of contents
1. About Automatic water level indicator & control
    * [1.1 Introduction](#11-introduction-of-product-management)
    * [1.2 Features](#12-features)
    * [1.3 4W & 1H](#13-4ws-and-1h)
    * [1.4 SWOT Analysis](#14-swot-analysis)
2. Requirements
    * [2.1 HIGH Level requirements](#21-high-level-requirements)
    * [2.2 LOW Level requirements](#22-low-level-requirements)
3. Flow chart, Block diagram and Explanation
    * [3.1 Usecase Diagram](#31-use-case-diagram)
    * [3.2 Data Flow Diagram](#32-data-flow-diagram)
    * [3.3 Structural Diagram](#33-structure-diagram)
    * [3.4 Flow chart](#34-flow-chart)
4. Test plans
   * [4.1 High level test plan](#41-high-level-test-plan)
   * [4.2 Low lwvwl test plan](#42-low-level-test-plan)

[Code](#code)

[OUTPUT](#output)

---
# 1.1 Introduction of Product Management

Product Management System is a simple application system designed to maintain details of all products. Products are used on day to day life . The project focuses on adding new Product, viewing Product, deleting, Reading and editing the list.

---
# 1.2 Features

- Major activities of the manual system is automated, which increases its throughput
- The system is fast, user friendly and interactive
- The information entered is more accurate and clear
- Better data management facility in terms of maintaining files which are entered in registers manually and stored.
---
[Back to Contents](#table-of-contents)

---

# 1.3 4W'S and 1H

**Who**
Any one who wants to view, Search products can view this application.

**What**

Product Management Systems is a way that helps to maintain a database of the products.

**When**

This Product Management System is very useful when there are large no of Products to be listing, search, read, Edit and delete . It is very tedious to enter the records manually so here this project come into handy.

**Where**

The Product management system is nowadays essential for malls, medical stores, private companies and other organizations. They can use this software as the purpose of Adding, Search, Read and Delete the Product.

**How**

This project is implemented to do the Adding, search, read, edit and deleteing of the product by using structures, files, pointers and other functionalities of C.

---
[Back to Contents](#table-of-contents)

---
# 1.4 SWOT Analysis

**Strength**

- Easy User Interraction System..
- Increased Product Management.
- Efficient Cloud Data Management.
- Highly Secure, Scalable & Reliable.
- System Access.

**Weakness**

- The data stored is system to cyber hacks.
- Costly and Expensive.
- Complicated to operate.
- Online Systems require high-speed internet connectivity.
- Risk of computer virus.

**Opportunities**

- Develop User Interface.
- Add More Funcationalities.

**Threats**

- Other Applications have better Features.
- Other Applications are Secured.
- Better Management system.

---
[Back to Contents](#table-of-contents)

---
# 2.1 HIGH LEVEL REQUIREMENTS

|RID |DESCRIPTION |STATUS |
|---- |---- |---- |
|HLR1 |C LANGUAGE  |IMPLEMENTED |
|HLR2 |OS WINDOWS |IMPLEMENTED |
|HLR3 |OS LINUX |IMPLEMENTED |
|HLR4 |HARDDISK |IMPLEMENTED |
|HLR5 |RAM 4GB |IMPLEMENTED |

# 2.2 LOW LEVEL REQUIREMENTS

|RID |DESCRIPTION |STATUS |
|---- |---- |---- |
|LLR1 |ADD Product |IMPLEMENTED |
|LLR2 |DELETE product |IMPLEMENTED |
|LLR3 |SEARCH product |IMPLEMENTED |
|LLR4 |Read product |IMPLEMENTED |
|LLR5 |Edit product |IMPLEMENTED |

---
[Back to Contents](#table-of-contents)

---
# Behaviour Diagram

## 3.1 Use Case Diagram

![Use Case Diagram](https://user-images.githubusercontent.com/98537406/155880047-d9d5824a-8cd6-42b7-9e1b-53d27db6b551.png)


## 3.2 Data Flow Diagram

![DataFlowDia](https://user-images.githubusercontent.com/98537406/155879989-44aa15ff-1bba-4a41-8116-4fc0eb83afbf.png)


# 3.3 Structure Diagram

## 3.4 Flow chart

![ProductM](https://user-images.githubusercontent.com/98537406/155879847-d5564020-78dc-430a-9cb7-e4a31ad85ee4.png)

---
[Back to Contents](#table-of-contents)

---
# Test Plan & Output

## 4.1 High level Test Plan

|TEST ID   |DESCRIPTION                 |EXPECTED I/P |Exp. O/p |Actual O/p |Pass or Fail |
|---- |---- |---- |---- |---- |---- |
|HLT_01 |Entering into the System while Loging in. |Enter Username and Password. |Login Successful |Login Successful |Pass |
|HLT_02 |To Add Product. |Choice 1 |Enter the product detail |Enter the product detail |pass |
|HLT_03 |To Delete Products |Choice 2, Enter Product Name |Record Deleted |Record Deleted |Pass |
|HLT_04  |To Search Products |Choice 3, Enter Product name |Record Found |Record found |Pass |
|HLT_05  |To Read Products |Choice 4 |Display of all the Product details |Display of all the Product details |Pass |
|HLT_06  |To Edit Products |Choice 5, Enter Details asked |Successfully Edited |Successfully Edited |Pass |

## 4.2 Low Level Test Plan

|TEST ID      |DESCRIPTION                             |EXPECTED I/P |Exp. O/p |Actual O/p |Pass or Fail |
|---- |---- |---- |---- |---- |----|
|LLT_01 |Enter Product Code in Add |Eg. 111 |Move to Next |Move |Pass |
|LTT_02 |Enter Product Code in Add |Eg. abc |Move to Next |Code contain invalid character. Please 'Enter' again |Fail |
|LLT_03 |Enter the Product Name in Add |Eg. Shoes |Move to Next Company name |Move to Next Company name |Pass |
|LLT_04 |Enter the Product name in Add |Eg. 1234 |Move |Name contain invalid character. Please 'Enter' again |Fail |
|LLT_05 |Enter the Product Compny Name in Add |Eg. Bata |Move to Next |Move to Next |Pass |
|LLT_06 |Enter the Product Company Name in Add |Eg. 123 |Move to Next | ontain invalid character. Please 'Enter' again |Fail |


---
[Back to Contents](#table-of-contents)

---

# Code

/* Main Program */

```

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

```
```
/*Code to add products*/
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

```
```
/*Code to read the products*/
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

```
```
/*Code to search products*/
#include "Productmanagement.h"

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

```
```
/*Code to update the Product details*/
#include "Productmanagement.h"


// Function to edit the Products.
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

```
```
/*Code to sell the product*/
#include "Productmanagement.h"

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

```
```
/*Code to delete the product*/
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

```

---
[Back to Contents](#table-of-contents)

---
# Program Output

- Login Page
<img width="638" alt="Login_Page" src="https://user-images.githubusercontent.com/98537406/153622868-d0364f1e-28db-4bc9-a3f3-2a40a345ed0b.PNG">

---

- Add Product
<img width="460" alt="Add_Product" src="https://user-images.githubusercontent.com/98537406/153623197-4066f66a-3fa8-4933-908e-a0dd0318673d.PNG">

---
- Read Product
<img width="670" alt="Read_Product" src="https://user-images.githubusercontent.com/98537406/153623288-97b66e03-f840-4f98-8609-dbf01be5f8c1.PNG">

---
- Search Product
<img width="371" alt="Search_Product" src="https://user-images.githubusercontent.com/98537406/153626982-9eabe3f5-3db6-4adb-a70f-26ebf353e2c1.PNG">

---
- Edit Product
<img width="577" alt="Edit_Product" src="https://user-images.githubusercontent.com/98537406/153623576-3ec35d50-7502-46ed-8b02-015077e6f464.PNG">

---
- Sell Product
<img width="508" alt="Sell_Product" src="https://user-images.githubusercontent.com/98537406/153623696-ef186139-e864-404c-9d76-5430cbdce46d.PNG">

---
- Delete Product
<img width="640" alt="Delete_Product" src="https://user-images.githubusercontent.com/98537406/153623892-d5ea1698-a885-4d43-882b-fdf69f0846f0.PNG">

---
