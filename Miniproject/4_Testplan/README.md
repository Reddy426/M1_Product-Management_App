# High level Test Plan:

|TEST ID   |DESCRIPTION  	              |EXPECTED I/P |Exp. O/p |Actual O/p |Pass or Fail |
|---- |---- |---- |---- |---- |---- |
|HLT_01 |Entering into the System while Loging in. |Username and Password. |Login Successful |Login Successful |Pass |
|HLT_02	|To Add Product. |Choice 1 |Enter the product detail |Enter the product detail |pass |
|HLT_03	|To Delete Products |Choice 2, Enter Product Name |Record Deleted |Record Deleted |Pass |
|HLT_04	 |To Search Products |Choice 3, Enter Product name |Record Found |Record found |Pass |
|HLT_05	 |To Read Products |Choice 4 |Display of all the Product details |Display of all the Product details |Pass |
|HLT_06	 |To Edit Products |Choice 5, Enter Details asked |Successfully Edited |Successfully Edited |Pass |

# Low Level Test Plan:

|TEST ID     	|DESCRIPTION	                            |EXPECTED I/P |Exp. O/p |Actual O/p |Pass or Fail |
|---- |---- |---- |---- |---- |----|
|LLT_01 |Enter Product Code in Add |Eg. 111 |Move to Next |Move |Pass |
|LTT_02 |Enter Product Code in Add |Eg. abc |Move to Next |Code contain invalid character. Please 'Enter' again |Fail |
|LLT_03	|Enter the Product Name in Add |Eg. Shoes |Move to Next Company name |Move to Next Company name |Pass |
|LLT_04 |Enter the Product name in Add |Eg. 1234 |Move |Name contain invalid character. Please 'Enter' again |Fail |
|LLT_05	|Enter the Product Compny Name in Add |Eg. Bata |Move to Next |Move to Next |Pass |
|LLT_06 |Enter the Product Company Name in Add |Eg. 123 |Move to Next | ontain invalid character. Please 'Enter' again |Fail |


