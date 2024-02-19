#include<iostream>
using namespace std;
main()
{
	int a=123,b=321;
	void swap1(int , int);
	cout<<"the values of a and b before function  call"<<a<<" "<<b<<endl;
	swap1(a,b);
	cout<<"the values of a and b after function  call in main"<<a<<" "<<b<<endl;
	}
void swap1(int a,int b)
{
	cout<<"the values of a and b before swapping inside the function"<<a<<" "<<b<<endl;
	int c;
	c=a;
	a=b;
	b=c;
	cout<<"the values of a and b after swapping inside the function"<<a<<" "<<b<<endl;
	
}
