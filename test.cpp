#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include <fstream>
#include "Customer.h"
#include "File_IO.h"
using namespace std;

int main(){
  string Goods[50];
  int b[50],c[50],num;
  Customer s[50];
  int x=0;
  ReadFile(Goods,b,c,num);
  for(int i=0;i<50;++i){
    srand(time(0)+x);
    int mAx= rand()%3;
    int n=0;
    int p[3]={-1,-1,-1};
    while (n<=mAx){
        int ct=0;
        ++x;
        ++n;
        int a = rand()% num;
        int b = rand()% 10+1;
        for(int j=0;j<3;++j){
            if(p[j]==a){
                ct=1;
            }
        }
        if(ct==0){
            cout << "attend " << i+1 << endl;
            s[i].append_Goods(Goods[a]);
            s[i].append_num_Goods(b);
        }
        p[n]=a;
    }
  }

  ofstream fout;
  fout.open("testing.txt");
  fout<< 50<< endl;
  for(int i=0;i<50;++i){
      fout<< s[i].length()<< endl;
      for(int j=0;j<s[i].length();++j){
          fout<< s[i].value_Goods(j)<< " "<< s[i].value_num_Goods(j)<< endl;
      }
  }
  fout.close();
  return 0;
}

