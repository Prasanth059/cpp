// Constructor
#include<iostream>
using namespace std;
 class rectangle
{
	int l,b;
    public:
    	rectangle(int x,int y);
    	
    
	
		
	area()
	{
		int a;
		a=l*b;
		cout<<"Area="<<a<<endl;
		
	}
	
};
rectangle::rectangle(int x,int y):l(x),b(y)
	{
	}
  main()
     {
     	
      
       rectangle obj1(9,8),obj(obj1);
     	    
     	//rectangle obj=obj1;
     	obj.area();
     	 // obj2.area();
	 }
