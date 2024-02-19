// Constructor
#include<iostream>
using namespace std;
 class rectangle
{
	int l,b;
    public:
    	
    	rectangle()        // Default Constructor
    	{
    		l=10;
    		b=80;
    		cout<<"Iam a Default Construstor "<<endl;
		}
	rectangle(int x,int y)
	{
		l=x;
		b=y;
		cout<<"Iam Parameterized Constructor"<<endl;
	}
		rectangle(int x)
	{
		l=x;
	

		cout<<"Iam Parameterized Constructor"<<endl;
	}
	area()
	{
		int a;
		a=l*b;
		cout<<"Area="<<a<<endl;
		
	}
};
  main()
     {
     	
     	rectangle obj; 
     //	  rectangle obj1(9,8);
     	    
     	    rectangle obj2(10);
     	  obj2.area();
	 }
