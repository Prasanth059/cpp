#include<iostream>
using namespace std;
 class rectangle
     {
 	    private:
 	    	int length,breath,area;
 	    	
	   	
	   	
	   	public:
	   		getdata()
 		{
 			cout<<"enter the length and breath ";
 			cin>>length>>breath;
		
		 }
		 mearea()
		{
			area=length*breath;
		 cout<<area;
		 } 
      };
      main()
      {
      	rectangle r1;
      	r1.getdata();
      	r1.mearea();
	  }
