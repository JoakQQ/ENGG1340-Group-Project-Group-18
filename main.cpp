#include <iostream>
#include <string>
#include <ctime>
#include "ReadFile.cpp"

using namespace std;

const int MAXGOODS = 100;
const int MAX = 100;

class Customers{
public:
	string goods[MAXGOODS];
	int numOfGoods[MAXGOODS];
	
private:
	int length(string arr[]){
		int i = 0;
		while(arr[i] != '\0'){
			i++;
			if (i == MAXGOODS){
				break;
			}
		}
		return i;
	}
	void printclass(){
		for (int i = 0; i < Customers.length(Customers.goods); i++){
			cout << goods[i] << " : " << numOfGoods[i] << endl;
		}
	}
};

int calculateRegisters(time){
	
}

int maxprofit(int operating, int netprofit){
	return netprofit - operating;
}
int timeofline(Customer S[],){

}
int main(){
	string Goods[MAX];
	int profitsGoods[MAX], timesGoods[MAX];
	ReadFile(Goods, profitsGoods, timesGoods);
	return 0;
}
