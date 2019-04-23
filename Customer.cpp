#include "Customer.h"

int Customer::length(){
	int i = 0;
	while (num_Goods[i] != '\0'){
		i++;
		if(i == MAXGOODS){
			break;
		}
	}
	return i;
}

void Customer::printCustomer(){
	for (int i = 0; i < length(); i++){
		cout << Goods[i] << " : " << num_Goods[i] << endl;
	}
}