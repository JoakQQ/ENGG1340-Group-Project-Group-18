#ifndef _CUSTOMER_CLASS_
#define _CUSTOMER_CLASS_

#include <iostream>
#include <string>
#include "List.h"
using namespace std;

class Customer
{
public:
    string_node *Goods = NULL;
    int_node *num_Goods = NULL;
    int length();
    void printCustomer();
    void append_Goods(string info);
    void append_num_Goods(int info);
    string value_Goods(int count);
    int value_num_Goods(int count);
    bool find_Goods(string target);
    int find_num_Goods(string target);
};

#endif
