#include <iostream>
using namespace std;

int main(){
   int num,sum=0,d,s;
   cout<<"Enter a number\n";
   cin>>num;
   int n=num;
   while(num!=0){
   	d=num%10;
   	s=d*d*d;
   	sum=sum+s;
   	num=(int)num/10;
   }
   if(sum==n)
   cout<<"The number is Armstrong number\n";
 return 0;
}
