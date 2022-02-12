/**
 * @file Productmanagement.h
 * @author Reddy426 (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-02-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */

// Header gaurd
#ifndef PRODUCTMANAGEMENT_H_
#define PRODUCTMANAGEMENT_H_

//Include file

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



//Structure Declaration

typedef struct items
{
    char product_code[50];
    char product_name[50];
    int rate;
    int quantity;
    char Company_name[30];

} ITEM;


#endif