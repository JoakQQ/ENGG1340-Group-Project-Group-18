#include "Customer.h"

int Customer::length(){
	int count = 0;
	int_node *p = num_Goods;
	while (p != NULL){
		p = p->next;
		count++;
	}
	return count;
}

void Customer::printCustomer(){
	for (int i = 0; i < length(); i++){
		cout << value_string_node(Goods, i) << " : " << value_int_node(num_Goods, i) << endl;
	}
}

void Customer::append_Goods(string input){
	append_string_list(Goods, input);
}

void Customer::append_num_Goods(int input){
	append_int_list(num_Goods, input);
}

string Customer::value_Goods(int count){
	return value_string_node(Goods, count);
}

int Customer::value_num_Goods(int count){
	return value_int_node(num_Goods, count);
}

bool Customer::find_Goods(string target){
	return find_string_value(Goods, target);
}
int Customer::find_num_Goods(string target){
	return find_num_list(Goods, num_Goods, target);
}
