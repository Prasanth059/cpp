#include<iostream>
using namespace std;
class rect
 class rect2
{
	private:
		int a,len,bre;
		public:
			friend int area(rect obj); //declaration of friend function
			me()
			{
				len=10;
				bre=5;
				cout<<"the value of a :"<<len<< " "<<endl;
				cout<<"\nthe value of b :"<<bre<< " "<<endl;
			}
};
   class rect2
   {
   	private:
   	int x,y;
   	public:
   				friend int area(rect2 obj2); //declaration of friend function
   		 get()
   		 {
   		 	x=90;
   		 	y=80;
   		 	cout<<"\nthe value of x :"<<x<< " "<<endl;
				cout<<"\nthe value of y :"<<y<< " "<<endl;
			}
   };







int area (rect obj)
{
	int ar;
    ar=obj.len*obj.bre;
	cout<<ar;
}
main()
{
	rect obj;
	obj.me();
	rect2 obj2;
	obj2.get();
	
}
