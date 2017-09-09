 #include <iostream>
 using namespace std;
 int main() {
    	double sal,gross,hra,da;
    	cout <<"Enter the salary\n";
    	cin >>sal;
    	if(sal<=10000)
    	{
    		hra = 0.2*sal;
    		da = 0.8*sal;
    	}
    	else if(sal<=20000)
    	{
    		hra = 0.25*sal;
    		da = 0.9*sal;
    	}
    	else if(sal>20000)
    	{
    		hra = 0.3*sal;
    		da = 0.95*sal;
    	}
    	gross = sal+hra+da;
    	cout <<"Gross income = "<<gross<<"\n";
    	return 0;
    }
