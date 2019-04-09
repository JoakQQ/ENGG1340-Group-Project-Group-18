#include <string>
#include <fstream>
#include <sstream>
#include <cstdlib>

using namespace std;

const int MAX = 100;

void ReadFile(string a[], int b[], int c[]){
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
}

int main(){
	string Goods[MAX];
	int profitsGoods[MAX], timesGoods[MAX];
	ReadFile(Goods, profitsGoods, timesGoods);
	return 0;
}
