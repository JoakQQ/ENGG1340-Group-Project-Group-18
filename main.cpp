#include <iostream>
#include <string>
#include "List.h"	  //customerized list
#include "ReadFile.h" // Read file: ReadFile()
#include "Customer.h" // Customer Class
#include "function.h"

using namespace std;

const int MAXGOODS = 100;

int main(){
	string Goods[MAXGOODS];
	int profitsGoods[MAXGOODS], timesGoods[MAXGOODS], num_items;
	ReadFile(Goods, profitsGoods, timesGoods, num_items);
	int num_Customer, item_Customer, item_Brought;
	string item_name;
	cout << "Please input number of customer waiting in line: ";
	cin >> num_Customer;
	Customer *customer_arr = new Customer[num_Customer]();
	for (int i = 0; i < num_Customer; i++){
		cout << "Customer " << i + 1 << " :" << endl;
		cout << "Please input types of item you want to buy: ";
		cin >> item_Customer;
		for (int j = 0; j < item_Customer; j++){
			cout << "item name " << i + 1 << " : ";
			cin >> item_name;
			customer_arr[i].append_Goods(item_name);
			cout << "how many item " << i + 1 << " you brought : ";
			cin >> item_Brought;
			customer_arr[i].append_num_Goods(item_Brought);
		}
	}
	int num_Register, num_Customer_left, time;
	num_Register = calculateRegisters(timeofline(customer_arr, num_Customer, Goods, timesGoods, num_items));
	num_Customer_left = find_Customer_left(customer_arr, num_Customer, Goods, timesGoods, num_items, time);
	
	delete[] customer_arr;
	return 0;
}
