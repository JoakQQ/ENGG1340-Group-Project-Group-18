#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include <fstream>
#include "Customer.h"
#include "File_IO.h"
using namespace std;
const int MAXGOOD=100; 
int main(){
  string Goods[MAXGOOD];
  int b[MAXGOOD],c[MAXGOOD],num,NO;
  cout << "Number of customer: ";
  cin>> NO;
  Customer *s = new Customer [NO];
  int x=0;
  ReadFile(Goods,b,c,num);
  for(int i=0;i<NO;++i){
    srand(time(0)+x);
    int mAx= rand()%10;
    int n=0;
    int p[10];
    while (n<=mAx){
        int ct=0;
        int a = rand()% num;
        int b = rand()% 10+1;
        for(int j=0;j<n;++j){
            if(p[j]==a){
                ct=1;
            }
        }
        if(ct==0){
            s[i].append_Goods(Goods[a]);
            s[i].append_num_Goods(b);
        }
        p[n]=a;
        ++x;
        ++n;
    }
  }

  ofstream fout;
  fout.open("testing.txt");
  fout<< NO<< endl;
  for(int i=0;i<NO;++i){
      fout<< s[i].length()<< endl;
      for(int j=0;j<s[i].length();++j){
          fout<< s[i].value_Goods(j)<< " "<< s[i].value_num_Goods(j)<< endl;
      }
  }
  cout << "*The test case is generated and put into the \"testing.txt\" file." << endl;
  delete []s;
  fout.close();
  return 0;
}
