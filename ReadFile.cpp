#include "ReadFile.h"

void ReadFile(string a[], int b[], int c[]){
	ifstream fin("item.txt");
	string line;
	int i=0;
	while(getline(fin,line)){
		string x;
		istringstream iss;
		iss.str(line," ");
		iss >> a[i];
		iss >> x;
		b[i] = atoi (x.c_str());
		iss >> x;
		c[i] = atoi (x.c_str());
		i++;
	}
	fin.close();
}
