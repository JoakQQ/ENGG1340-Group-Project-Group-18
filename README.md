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
4. The system can generate at least 50 customers with random groceries at random time interval for **testing purpose**.
5. The system is able to **calculate the processing time** for each customer by **reading the grocery list including prices**, and the list can be **assessed** for adding or deleting grocery when needed.
