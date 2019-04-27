# ENGG 1340 Group Project (Gorup 18)
*Leung Chun Fai, Young Chak Fung*

**Project Topic: Cash Register system (_Lavender_)**

## Problem Setting
**_Lavender_** is a grocery store selling a large variety of items for customers. The time customers spend at register is varying with 
the amount of item they get. The customers with groceries will wait in a line in front of 4 cashiers in the store. If the customers 
wait too long for the register, they will leave without buying anything. Thus, it is unavoidable if the waiting line is too long. With 
the expense of each cashiers runnung at *$60 per hour* (*$1 per minute*), a cash register system is needed for maximizing the profits of 
the store. The system must be dynamic with the amount of customers and be able to change its grocery list from time to time, depending 
on the store managers want to add items for sells or delete items in shortage.

## Problem Statements
*The problem statements are listed below:*
1. **Maximum profit** need to be found.
2. Customer leaves the store if they wait more than *15 mins*.
3. The number of cashier opened in order to **maximize the profit** need to be decided. We cannot open all the cashier as each cashier costs money when running.
4. The ways of generating random cases for testing.
5. The way of calculating the **processing time** for each customer as different customer can have **different quantity of grocery**.

## Program Features
*The main features of the system as follow:*
1. The system should find the **maximum profit** which is the *cost of good sold* minus the *running costs of cashiers*.
2. The system should find a way to **minimize the customers leaving the store** (*customers will leave wait more than 15 mins at the register*).
3. **The number of cashiers opened** in order to maximize the profit need to be decided as follow:
    - **one** cashier is opened if the overall waiting time of the line is **less than 15 minutes**.
    - **two** cashiers are opened if the overall waiting time of the line is **between 15 to 30 minutes**.
    - **three** cashiers are opened if the overall waiting time of the line is **between 30 to 45 minutes**.
    - **four** cashiers are opened if the overall waiting time of the line is **more than 45 minutes**.
4. The system can generate at least 50 customers for **testing purpose**.
5. The system is able to **calculate the processing time** for each customer by **reading the grocery list including prices**, and the list can be **assessed** for adding or deleting grocery when needed.
6. The system is implemented with dynamic memory management.
7. The system includes the linked list, class and dynamic 2D array.

## Compilation and Execution Instruction Menue

### Testing Case
1. Download the zipped file and unzip the file.
2. Open up the terminal and put all the files inside the terminal.
3. Type the command ```cd Downloads/ENGG1340-Group-Project-Group-18--master/```.
4. Type the command ```make main```,then ```make test``` to compile the main.cpp and test.cpp files to main and test files.
5. Type the command ```./test``` to execute the test program.
6. Input the number of customer.
7. Type the command ```./main < testing.txt``` to test the program.
8. Type the command ```clean_main```, ```clean_test``` to clean up the object and text files.

### Real Case
1. Download the zipped file and unzip the file.
2. Open up the terminal and put all the files inside the terminal.
3. Type the command ```cd Downloads/ENGG1340-Group-Project-Group-18--master/```.
4. Type the command ```make main``` to compile the main.cpp to main file.
5. Type the command ```./main``` to execute the program.
6. Input the number of customer.
7. Input the number of types of item a customer will buy, name of items, quantity of the item, repeat the above steps for each customer. 
8. Type the command ```clean_main``` to clean up the object and text files.

## Input/Output Specification

### Test Case 1 (testing program)
#### Input
![image](https://i.imgur.com/ERPqSHv.png)
![image](https://i.imgur.com/L2eSSSG.png)
![image](https://i.imgur.com/IsYMynE.png)
#### Output
![image](https://i.imgur.com/x5pHQBV.png)

