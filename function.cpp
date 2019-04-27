#include "function.h"

int Customer_time(Customer S, string Goods[], int time[], int num_Of_Goods){
	int t = 0;
	for (int j = 0; j < num_Of_Goods; j++){
		if (S.find_Goods(Goods[j])){
			t += S.find_num_Goods(Goods[j]) * time[j];
		}
	}
	return t;
}

int calculateRegisters(Customer S[], int num, string Goods[], int time[], int num_Of_Goods){
	int t = 0;
	for (int i = 0; i < num; i++){
		t += Customer_time(S[i], Goods, time, num_Of_Goods);
	}
	int num_Register = 1;
	if (t >= 15 * 60 && t < 30 * 60){
		if (!(t - Customer_time(S[num - 1], Goods, time, num_Of_Goods) >= 15)){
			num_Register = 2;
		}
	}
	else if (t >= 30 * 60 && t < 45 * 60){
		if (t - Customer_time(S[num - 1], Goods, time, num_Of_Goods) - Customer_time(S[num - 2], Goods, time, num_Of_Goods) >= 30){
			num_Register = 3;
		}
		else{
			num_Register = 2;
		}
	}
	else if (t >= 45 * 60){
		if (t - Customer_time(S[num - 1], Goods, time, num_Of_Goods) - Customer_time(S[num - 2], Goods, time, num_Of_Goods) - Customer_time(S[num - 3], Goods, time, num_Of_Goods) >= 45){
			num_Register = 4;
		}
		else{
			num_Register = 3;
		}
	}
	return num_Register;
}

void sort_line(Customer S[], int num, Customer **ARR, int ARR_x){
	for (int i = 0; i < num; i++){
		ARR[i % ARR_x][i / ARR_x] = S[i];
	}
}

void cut_line(Customer ARR[], int &length, int &left, string Goods[], int timesGoods[], int num_items){
	int t = 0, iteration;
	for (int i = 0; i < length; i++){
		t += Customer_time(ARR[i], Goods, timesGoods, num_items);
		if (t > 15 * 60){
			iteration = i + 1;
			break;
		}
	}
	left += (length - iteration);
	length -= iteration;
}

int Customer_Profit(Customer S, string Goods[], int profitsGoods[], int num_items){
	int profit = 0;
	for(int i = 0; i < num_items; i++){
		if (S.find_Goods(Goods[i])){
			profit += S.find_num_Goods(Goods[i]) * profitsGoods[i];
		}
	}
	return profit;
}

double Register_Profit(Customer ARR[], int length, string Goods[], int timesGoods[], int profitsGoods[], int num_items){
	int Line_Profit = 0;
	for (int i = 0; i < length; i++){
		Line_Profit += Customer_Profit(ARR[i], Goods, profitsGoods, num_items);
	}
	double Expense;
	int time = 0;
	for (int i = 0; i < length; i++){
		time += Customer_time(ARR[i], Goods, timesGoods, num_items);
	}
	Expense = time / 60.0;
	return Line_Profit - Expense;
}

double calculate_Profit(Customer **ARR, int ARR_length[], int ARR_x, int &left, string Goods[], int timesGoods[], int profitsGoods[], int num_items){
	double total_profit = 0;
	for(int i = 0; i < ARR_x; i++){
		cut_line(ARR[i], ARR_length[i], left, Goods, timesGoods, num_items);
	}
	for (int i = 0; i < ARR_x; i++){
		total_profit += Register_Profit(ARR[i], ARR_length[i], Goods, timesGoods, profitsGoods, num_items);
	}
	return total_profit;
}
