#include <iostream>
#include <string>
#include "List.h"	  //customerized list
#include "File_IO.h" // Read file: ReadFile()
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
	Customer *customer_arr = new Customer [num_Customer]();
	for (int i = 0; i < num_Customer; i++){
		cout << "----- Customer " << i + 1 << " -----" << endl;
		cout << "Please input types of item you want to buy: ";
		cin >> item_Customer;
		for (int j = 0; j < item_Customer; j++){
			cout << "Name of item " << j + 1 << " : ";
			cin >> item_name;
			customer_arr[i].append_Goods(item_name);
			cout << "Number of item " << j + 1 << " : ";
			cin >> item_Brought;
			customer_arr[i].append_num_Goods(item_Brought);
		}
	}
	int num_Register;
	num_Register = calculateRegisters(customer_arr, num_Customer, Goods, timesGoods, num_items);
	int num_Customer_line;
	Customer ** Register_line = new Customer * [num_Register];
	int *num_Customer_in_line = new int [num_Register]();
	for (int i = 0; i < num_Customer % num_Register; i++){
		num_Customer_line = num_Customer / num_Register + 1;
		Register_line[i] = new Customer [num_Customer_line];
		num_Customer_in_line[i] = num_Customer_line;
	}
	for (int i = num_Customer % num_Register; i < num_Register; i++){
		num_Customer_line = num_Customer / num_Register;
		Register_line[i] = new Customer [num_Customer_line];
		num_Customer_in_line[i] = num_Customer_line;
	}

	sort_line(customer_arr, num_Customer, Register_line, num_Register);

	int num_Customer_left = 0;
	double total_profit;
	total_profit = calculate_Profit(Register_line, num_Customer_in_line, num_Register, num_Customer_left, Goods, timesGoods, profitsGoods, num_items);
	
	cout << "\nMaximized Profit: " << total_profit << "\n\n";

	if (num_Customer_left > 0){
		if (num_Customer_left > 1){
			cout << "There are " << num_Customer_left << " customers leaving." << endl;
		}
		else{
			cout << "There is 1 customer leaving." << endl;
		}
	}
	else{
		cout << "There is no customer leaving." << endl;
	}
	cout << endl;

	for (int i = 0; i < num_Register; i++){
		cout << "Number of customer at register "  << i + 1 << " : " << num_Customer_in_line[i] << endl;
	}
	for (int i = 4 - num_Register - 1; i <= 4; i++){
		cout << "Register " << i << " is currently closed." << endl;
	}
	cout << endl;

	WriteINFO(Register_line, num_Customer_in_line, num_Register);
	cout << "*The data log is wrote to \"log.txt\" file." << endl;

	for (int i = 0; i < num_Register; i++){
		delete [] Register_line[i];
	}
	delete [] Register_line;
	delete [] num_Customer_in_line;
	delete [] customer_arr;
	return 0;
}
