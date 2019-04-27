#ifndef _File_IO_
#define _File_IO_

#include <string>
#include <fstream>
#include <sstream>
#include <cstdlib>

#include "Customer.h"
using namespace std;


void ReadFile(string a[], int b[], int c[], int &num);

void WriteINFO(Customer **ARR, int length[], int ARR_x);

#endif
