#ifndef _FUNCTION_FILE_
#define _FUNCTION_FILE_

#include "Customer.h"
using namespace std;

int Customer_time(Customer S, string Goods[], int time[], int num_Of_Goods);

int calculateRegisters(Customer S[], int num, string Goods[], int time[], int num_Of_Goods);

void sort_line(Customer S[], int num, Customer **ARR, int ARR_x);

void cut_line(Customer ARR[], int &length, int &left, string Goods[], int timesGoods[], int num_items);

int Customer_Profit(Customer S, string Goods[], int profitsGoods[], int num_items);

double Register_Profit(Customer ARR[], int length, string Goods[], int timesGoods[], int profitsGoods[], int num_items);

double calculate_Profit(Customer **ARR, int ARR_length[], int ARR_x, int &left, string Goods[], int timesGoods[], int profitsGoods[], int num_items);

#endif
