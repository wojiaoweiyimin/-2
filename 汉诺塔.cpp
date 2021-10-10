#include<iostream>
using namespace std;
static int w=0;
void move(int n,char x,char y){

 cout<<"把"<<n<<"号从"<<x<<"挪到"<<y<<endl; 
    w++;
}
void hannota(int n,char A,char B,char C){
 if(n==1)move(1,A,C);
 else
      {
   hannota(n-1,A,C,B);
      move(n,A,C);
      hannota(n-1,B,A,C);}
} 
int main(){
 int n;
 cout<<"请输入汉诺塔阶数：";
 cin>>n;
 hannota(n,'A','B','C');
 cout<<"移动次数："<<w;
 return 0;
}
