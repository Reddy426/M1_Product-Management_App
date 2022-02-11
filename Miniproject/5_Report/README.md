# Introduction of Product Management:

Product Management System is a simple application system designed to maintain details of all products. Products are used on day to day life . The project focuses on adding new Product, viewing Product, deleting, Reading and editing the list.

# Features:
- Major activities of the manual system is automated, which increases its throughput
- The system is fast, user friendly and interactive
- The information entered is more accurate and clear
- Better data management facility in terms of maintaining files which are entered in registers manually and stored.

# Defining our product system:

![ProductManagements](https://user-images.githubusercontent.com/98537406/153473497-43f4469a-3e18-4ad1-babc-50979cea82e8.png)





# 4W'S and 1H:
**Who:**
Any one who wants to view, Search products can view this application.

**What:**

Product Management Systems is a way that helps to maintain a database of the products.

**When:**

This Product Management System is very useful when there are large no of Products to be listing, search, read, Edit and delete . It is very tedious to enter the records manually so here this project come into handy.

**Where:**

The Product management system is nowadays essential for malls, medical stores, private companies and other organizations. They can use this software as the purpose of Adding, Search, Read and Delete the Product. 

**How:**

This project is implemented to do the Adding, search, read, edit and deleteing of the product by using structures, files, pointers and other functionalities of C.


# SWOT Analysis:

**Strength:**

- Easy User Interraction System..
- Increased Product Management.
- Efficient Cloud Data Management.
- Highly Secure, Scalable & Reliable.
- System Access.

**Weakness:**
- The data stored is system to cyber hacks.
- Costly and Expensive.
- Complicated to operate.
- Online Systems require high-speed internet connectivity.
- Risk of computer virus.


**Opportunities:**
- Develop User Interface.
- Add More Funcationalities.

**Threats:**
- Other Applications have better Features.
- Other Applications are Secured.
- Better Management system.


# HIGH LEVEL REQUIREMENTS:

|RID |DESCRIPTION |STATUS |
|---- |---- |---- |
|HLR1 |C LANGUAGE	 |IMPLEMENTED |
|HLR2 |OS WINDOWS |IMPLEMENTED |
|HLR3 |OS LINUX |IMPLEMENTED |
|HLR4 |HARDDISK |IMPLEMENTED |
|HLR5 |RAM 4GB |IMPLEMENTED |

# LOW LEVEL REQUIREMENTS:

|RID |DESCRIPTION |STATUS |
|---- |---- |---- |
|LLR1 |ADD Product |IMPLEMENTED |
|LLR2 |DELETE product |IMPLEMENTED |
|LLR3	|SEARCH product |IMPLEMENTED |
|LLR4 |Read product |IMPLEMENTED |
|LLR5	|Edit product |IMPLEMENTED |

# Test Plan & Output:
## High level Test Plan:

|TEST ID   |DESCRIPTION  	              |EXPECTED I/P |Exp. O/p |Actual O/p |Pass or Fail |
|---- |---- |---- |---- |---- |---- |
|HLT_01 |Entering into the System while Loging in. |Enter Username and Password. |Login Successful |Login Successful |Pass |
|HLT_02	|To Add Product. |Choice 1 |Enter the product detail |Enter the product detail |pass |
|HLT_03	|To Delete Products |Choice 2, Enter Product Name |Record Deleted |Record Deleted |Pass |
|HLT_04	 |To Search Products |Choice 3, Enter Product name |Record Found |Record found |Pass |
|HLT_05	 |To Read Products |Choice 4 |Display of all the Product details |Display of all the Product details |Pass |
|HLT_06	 |To Edit Products |Choice 5, Enter Details asked |Successfully Edited |Successfully Edited |Pass |

## Low Level Test Plan:

|TEST ID     	|DESCRIPTION	                            |EXPECTED I/P |Exp. O/p |Actual O/p |Pass or Fail |
|---- |---- |---- |---- |---- |----|
|LLT_01 |Enter Product Code in Add |Eg. 111 |Move to Next |Move |Pass |
|LTT_02 |Enter Product Code in Add |Eg. abc |Move to Next |Code contain invalid character. Please 'Enter' again |Fail |
|LLT_03	|Enter the Product Name in Add |Eg. Shoes |Move to Next Company name |Move to Next Company name |Pass |
|LLT_04 |Enter the Product name in Add |Eg. 1234 |Move |Name contain invalid character. Please 'Enter' again |Fail |
|LLT_05	|Enter the Product Compny Name in Add |Eg. Bata |Move to Next |Move to Next |Pass |
|LLT_06 |Enter the Product Company Name in Add |Eg. 123 |Move to Next | ontain invalid character. Please 'Enter' again |Fail |


