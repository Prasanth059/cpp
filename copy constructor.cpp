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
       rectangle obj1(9,8);
     	    
     	obj=obj1;
     	obj.area();
     	 // obj2.area();
	 }
