#include<iostream>
using namespace std;
 class rectangle
     {
 	    private:
 	    	int length,breath,area;
 	    	
	   	
	   	
	   	public:
	   		void getdata();
	   		void mearea();
	   	
      };
      	void rectangle::getdata()
 		{
 			cout<<"enter the length and breath ";
 			cin>>length>>breath;
		
		 }
		 void rectangle::mearea()
		{
			area=length*breath;
		   cout<<area;
		 } 
      main()
      {
      	rectangle r1;
      	r1.getdata();
      	r1.mearea();
	  }
