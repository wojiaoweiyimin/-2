#include<iostream>
using namespace std;
static int w=0;
void move(int n,char x,char y){

 cout<<"��"<<n<<"�Ŵ�"<<x<<"Ų��"<<y<<endl; 
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
 cout<<"�����뺺ŵ��������";
 cin>>n;
 hannota(n,'A','B','C');
 cout<<"�ƶ�������"<<w;
 return 0;
}
