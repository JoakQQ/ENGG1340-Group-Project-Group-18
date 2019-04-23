#include <string>
#include <iostream>
using namespace std;
const int MAXGOODS = 100;

class Customer
{
public:
    string Goods[MAXGOODS];
    int num_Goods[MAXGOODS];
    int length();
    void printCustomer();
};