#include "test.h"

void test(){
  string Goods[50];
  int b[50],c[50],num;
  Customer s[50];
  int x=0;
  ReadFile(Goods,b,c,num);
  for(int i=0;i<50;++i){
      srand(time(0)+x);
      int mAx= rand()%3;
      int n=0;
      while (n<=mAx){
          int a = rand()% num;
          int b = rand()% 10+1;
          s[i].append_Goods(Goods[a]);
          s[i].append_num_Goods(b);
          ++x;
          ++n;
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
}

