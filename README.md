# ENGG 1340 Group Project (Gorup 18)
*Leung Chun Fai, Young Chak Fung*

**Project Topic: Cash Register system (_Lavender_)**

# Problem Setting
**_Lavender_** is a grocery store selling a large variety of items for customers. The time customers spending at register is varying with 
the amount of item they are buying. The customers with grocery will wait in a line before the 4 cashiers in the store. If the customers 
waited too long for the register, they will leave without buying anything. Thus, it is unavoidable if the waiting line is too long. With 
the expense of each cashiers runnung at $60 per hour ($1 per minute). A cash register system is in need for maximizing the profits of 
the store. The system must be dynamic with the amount of customers and be able to change its grocery list from time to time, depending 
on the store managers want to add items for sells or delete items for shortage or other needs.

# Problem Statement
*The main problems the system as follow:*
1. The system should find the **maximum profit** which is the *cost of good sold* minus the *running costs of cashiers*.
2. The system should find a way to **minimize the customers leaving the store** (*customers will leave wait more than 15 mins at the register*).
3. The system is **dynamic**, it will be updated at an **1-minute time interval**. Thus, the waiting time for each customer will change    along with the system time. Therefore, the system should have the abilities to **measure the changing time variables** which the    customers at the end of the line will wait.
4.**The number of cashiers opened** in order to maximize the profit need to be decided as follow:
  4.1. **one** cashier is opened if the overall waiting time of the line is **less than 15 minutes**.
  4.2. **two** cashiers are opened if the overall waiting time of the line is **between 15 to 30 minutes**.
  4.3. **three** cashiers are opened if the overall waiting time of the line is **between 30 to 45 minutes**.
  4.4. **four** cashiers are opened if the overall waiting time of the line is **more than 45 minutes**.
5. The system can generate at least 50 customers with random groceries at random time interval for **testing purpose**.
6. The system is able to **calculate the processing time** for each customer by **reading the grocery list including prices**, and the list can be **assessed** for adding or deleting grocery when needed.
