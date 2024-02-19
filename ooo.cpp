#include<iostream>
using namespace std;
class first
{
	private:
	  int x;
	  int y;
	
    public:
    	int w;
      void getdata()
          {
          	  
          	cout<<"enter the values of x and y";
          	cin>>x>>y;
          	
          	  }
       void showdata()
	   {
	   	cout<<"x="<<x<<"\n"<<"y="<<y;
	   	
				}   	  
};
     main()
     {
     	first obj;
      	obj.getdata();
      	obj.showdata();
      	obj.w=10;
	 }
