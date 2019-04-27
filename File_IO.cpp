#include "File_IO.h"

void ReadFile(string a[], int b[], int c[], int &num){
	ifstream fin("item.txt");
	string line;
	int i=0;
	while(getline(fin,line)){
		string x;
		istringstream iss;
		iss.str(line);
		iss >> a[i];
		iss >> x;
		b[i] = atoi (x.c_str());
		iss >> x;
		c[i] = atoi (x.c_str());
		i++;
	}
	fin.close();
	num = i;
}

void WriteINFO(Customer **ARR, int length[], int ARR_x){
	ofstream fout("log.txt");
	for (int i = 0; i < ARR_x; i++){
		fout << "----- Register " << i + 1 << " -----" << endl;
		for (int j = 0; j < length[i]; j++){
			fout << "----- Customer " << j + 1 << " -----" << endl;
			for (int k = 0; k < ARR[i][j].length(); k++){
				fout << ARR[i][j].value_Goods(k) << " : " << ARR[i][j].value_num_Goods(k) << endl;
			}
		}
		fout << endl;
	}
	fout.close();
}
