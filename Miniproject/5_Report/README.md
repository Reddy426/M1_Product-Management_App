[SWOT](#swot-analysis)
# Introduction of Product Management

Product Management System is a simple application system designed to maintain details of all products. Products are used on day to day life . The project focuses on adding new Product, viewing Product, deleting, Reading and editing the list.

# Features
- Major activities of the manual system is automated, which increases its throughput
- The system is fast, user friendly and interactive
- The information entered is more accurate and clear
- Better data management facility in terms of maintaining files which are entered in registers manually and stored.

# Defining our product system

![DataFlowDia](https://user-images.githubusercontent.com/98537406/153628913-1802e63e-9895-4708-ab0d-2d4d514649c7.png)







# 4W'S and 1H
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


# SWOT Analysis

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


# HIGH LEVEL REQUIREMENTS

|RID |DESCRIPTION |STATUS |
|---- |---- |---- |
|HLR1 |C LANGUAGE	 |IMPLEMENTED |
|HLR2 |OS WINDOWS |IMPLEMENTED |
|HLR3 |OS LINUX |IMPLEMENTED |
|HLR4 |HARDDISK |IMPLEMENTED |
|HLR5 |RAM 4GB |IMPLEMENTED |

# LOW LEVEL REQUIREMENTS

|RID |DESCRIPTION |STATUS |
|---- |---- |---- |
|LLR1 |ADD Product |IMPLEMENTED |
|LLR2 |DELETE product |IMPLEMENTED |
|LLR3	|SEARCH product |IMPLEMENTED |
|LLR4 |Read product |IMPLEMENTED |
|LLR5	|Edit product |IMPLEMENTED |

# Behaviour Diagram

## Use Case Diagram
![Use Case Diagram](https://user-images.githubusercontent.com/98537406/153624020-45733f00-6c6e-49dd-b009-e14b4730ade7.png)


## Data Flow Diagram
![DataFlowDia](https://user-images.githubusercontent.com/98537406/153628913-1802e63e-9895-4708-ab0d-2d4d514649c7.png)




# Structure Diagram
## Flow chart

![ProductM drawio](https://user-images.githubusercontent.com/98537406/153703981-52713756-656b-44cb-a1a5-7570904624b3.png)





# Test Plan & Output
## High level Test Plan

|TEST ID   |DESCRIPTION  	              |EXPECTED I/P |Exp. O/p |Actual O/p |Pass or Fail |
|---- |---- |---- |---- |---- |---- |
|HLT_01 |Entering into the System while Loging in. |Enter Username and Password. |Login Successful |Login Successful |Pass |
|HLT_02	|To Add Product. |Choice 1 |Enter the product detail |Enter the product detail |pass |
|HLT_03	|To Delete Products |Choice 2, Enter Product Name |Record Deleted |Record Deleted |Pass |
|HLT_04	 |To Search Products |Choice 3, Enter Product name |Record Found |Record found |Pass |
|HLT_05	 |To Read Products |Choice 4 |Display of all the Product details |Display of all the Product details |Pass |
|HLT_06	 |To Edit Products |Choice 5, Enter Details asked |Successfully Edited |Successfully Edited |Pass |

## Low Level Test Plan

|TEST ID     	|DESCRIPTION	                            |EXPECTED I/P |Exp. O/p |Actual O/p |Pass or Fail |
|---- |---- |---- |---- |---- |----|
|LLT_01 |Enter Product Code in Add |Eg. 111 |Move to Next |Move |Pass |
|LTT_02 |Enter Product Code in Add |Eg. abc |Move to Next |Code contain invalid character. Please 'Enter' again |Fail |
|LLT_03	|Enter the Product Name in Add |Eg. Shoes |Move to Next Company name |Move to Next Company name |Pass |
|LLT_04 |Enter the Product name in Add |Eg. 1234 |Move |Name contain invalid character. Please 'Enter' again |Fail |
|LLT_05	|Enter the Product Compny Name in Add |Eg. Bata |Move to Next |Move to Next |Pass |
|LLT_06 |Enter the Product Company Name in Add |Eg. 123 |Move to Next | ontain invalid character. Please 'Enter' again |Fail |

# Program Output
- Login Page
<img width="638" alt="Login_Page" src="https://user-images.githubusercontent.com/98537406/153622868-d0364f1e-28db-4bc9-a3f3-2a40a345ed0b.PNG">

- Add Product
<img width="460" alt="Add_Product" src="https://user-images.githubusercontent.com/98537406/153623197-4066f66a-3fa8-4933-908e-a0dd0318673d.PNG">

- Read Product
<img width="670" alt="Read_Product" src="https://user-images.githubusercontent.com/98537406/153623288-97b66e03-f840-4f98-8609-dbf01be5f8c1.PNG">

- Search Product
<img width="371" alt="Search_Product" src="https://user-images.githubusercontent.com/98537406/153626982-9eabe3f5-3db6-4adb-a70f-26ebf353e2c1.PNG">

- Edit Product
<img width="577" alt="Edit_Product" src="https://user-images.githubusercontent.com/98537406/153623576-3ec35d50-7502-46ed-8b02-015077e6f464.PNG">

- Sell Product
<img width="508" alt="Sell_Product" src="https://user-images.githubusercontent.com/98537406/153623696-ef186139-e864-404c-9d76-5430cbdce46d.PNG">

- Delete Product
<img width="640" alt="Delete_Product" src="https://user-images.githubusercontent.com/98537406/153623892-d5ea1698-a885-4d43-882b-fdf69f0846f0.PNG">





