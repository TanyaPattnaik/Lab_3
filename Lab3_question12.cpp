#include <iostream>
using namespace std;    
int main() {     
        int m;
        cout <<"Enter the month number\n";
        cin >>m;
        if (m==1||m==3||m==5||m==7||m==8||m==10||m==12)
        cout <<"The month has thirty one days";
        else if (m==2)
        cout <<"The month has twenty eight days";
        else 
        cout <<"The month has thirty days";
    	return 0;
    }
